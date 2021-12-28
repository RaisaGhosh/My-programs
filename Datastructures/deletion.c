#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int a;
    struct node *l;
}node;

node *s=NULL;

void delete(int a){
    int i;
    node *p=s,*q;
    if(s==NULL){
        printf("Linked List is empty");
        return;
    }
    for(i=1;i<a-1;i++){
        p=p->l;
    }
    q=(p->l)->l;
    p->l=q;// if I don't put a-1 but <a and write q=p->l, it should work but not working??
}

void begindel(){
    s=s->l;
}

void enddel(){
    node *p=s;
    while((p->l)->l!=NULL){
        p=p->l;
    }
    p->l=NULL;
}

void addnode(int n){
    node *link = NULL,*x;
    link=(node*)malloc(sizeof(node));
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
    int n,c=1,p;
    while(c!=0){
    printf("\nEnter element to add to the linked list\n");
    scanf("%d",&n);
    addnode(n);
    fflush(stdin);
    printf("Do you want to continue\nPress 1 for yes and 0 for no: ");
    scanf("%d",&c);
    fflush(stdin);
    }
    display();
    printf("Enter position of node to be deleted: ");
    scanf("%d",&p);
    delete(p);
    display();
    printf("\n\n");
    printf("Deletion from beginning\n");
    begindel();
    display();
    printf("\n\n");
    printf("Deletion from end\n");
    enddel();
    display();
    return 0;
}