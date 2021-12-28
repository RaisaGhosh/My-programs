#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int a;
    struct node *l;
}node;

node *s=NULL;

void addnode(int n){
    node *link = NULL,*x;
    link=(node*)malloc(sizeof(node));  // why are we writing (node*) here???
    link->a=n;
    link->l=NULL;
    if(s==NULL){
        s=link;
    }
    else{
     x=s;
     while(x->l!=NULL){
        x=x->l;
     }
    }
    x->l=link;
}

void display(){
    node *n;
    int c=1;
    n=s;
    while(n!=NULL){
        printf("Node %d is %d\n",c,n->a);
        n=n->l;
        c++;
    }
}

int main(){
    int n,c=1;
    while(c==1){
    printf("\nEnter element to add to the linked list\n");
    scanf("%d",&n);
    addnode(n);
    fflush(stdin);
    printf("Do you want to continue\nPress 1 for yes and 0 for no: ");
    scanf("%d",&c);
    fflush(stdin);
    }
    display();
    return 0;
}
