#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int a;
    struct node *l;
}node;

node *s=NULL;
node *t=NULL;
node *f=NULL;

void concat(node *a,node *b){
    node *p;
    f=a;
    p=f;
    while(p->l!=NULL){
        p=p->l;
    }
    p->l=b;
}

void addnode1(int n){
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

void addnode2(int n){
    node *link = NULL,*x;
    link=(node*)malloc(sizeof(node));
    link->a=n;
    link->l=NULL;
    if(t==NULL){
        t=link;
    }
    else{
     x=t;
     while(x->l!=NULL){
        x=x->l;
     }
    }
    x->l=link;
}

void display(node *p){
    node *n;
    int c=1;
    n=p;
    while(n!=NULL){
        printf("Node\t%d\tis\t%d\n",c,n->a);
        n=n->l;
        c++;
    }
}

int main(){
    int n,c=1;
    while(c==1){
    printf("\nEnter element to add to the linked list 1\n");
    scanf("%d",&n);
    addnode1(n);
    fflush(stdin);
    printf("Do you want to continue\nPress 1 for yes and 0 for no: ");
    scanf("%d",&c);
    fflush(stdin);
    }
    printf("\n\n");
    printf("Linked List 1 is:\n");
    display(s);
    printf("\n\n");
    c=1;
    while(c==1){
    printf("\nEnter element to add to the linked list 2\n");
    scanf("%d",&n);
    addnode2(n);
    fflush(stdin);
    printf("Do you want to continue\nPress 1 for yes and 0 for no: ");
    scanf("%d",&c);
    fflush(stdin);
    }
    printf("\n\n");
    printf("Linked List 2 is:\n");
    display(t);
    printf("\n\n");
    concat(s,t);
    printf("Concatinated Linked List 2 is:\n");
    display(f);
    return 0;
}