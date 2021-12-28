#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int a;
    struct node *l;
}node;

node *s=NULL;

int nodesearch(int n){
    node *p=s;
    int c=1;
    while(p!=NULL){
        if(p->a==n){
            return c;
        }
        p=p->l;
        c++;
    }
    return 999;
}

void insertion(){
    int i,p1,p2;
    node *p=s,*q=NULL,*x=s;
    q=(node*)malloc(sizeof(node));
    q->a=13;
    p1=nodesearch(12);
    p2=nodesearch(14);
    for(i=1;i<p2-1;i++){
        x=x->l;
    }
    q->l=x->l;
    for(i=1;i<p1;i++){
        p=p->l;
    }
    p->l=q;
}

void insertbeg(int n){
    node *x=NULL;
    x=(node*)malloc(sizeof(node));
    x->a=n;
    x->l=s;
    s=x;
}

void delete(int n){
    int i,x;
    x=nodesearch(n);
    node *p=s,*q;
    if(s==NULL){
        printf("Linked List is empty");
        return;
    }
    for(i=1;i<x-1;i++){
        p=p->l;
    }
    q=(p->l)->l;
    p->l=q;
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
    int n,c=1,p,x;
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
    printf("\n\n");
    x=nodesearch(18);
    if(x==999)
        printf("Node of value 18 not present");
    else
        printf("A Node which contain the value 18 in that SLL is : %d\n",x);
    printf("\n\n");
    insertion();
    printf("The SLL after inserting 13 between 12 and 14 is\n");
    display();
    printf("\n\n");
    insertbeg(5);
    printf("The SLL after inserting node of value 5 at the beginning\n");
    display();
    printf("\n\n");
    delete(5);
    display();
    printf("\n\n");
    printf("Enter value of node to be deleted: ");
    scanf("%d",&p);
    printf("The SLL after deleting node of value %d\n",p);
    delete(p);
    display();
    return 0;
}