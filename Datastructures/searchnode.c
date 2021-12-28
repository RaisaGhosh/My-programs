#include <stdio.h>
#include <stdlib.h>

typedef struct linkedlist{
    int a;
    struct linkedlist *l;
}node;

node *s=NULL;

void nodesearch(int n){
    node *p=s;
    int c=1;
    while(p!=NULL){
        if(p->a==n){
            printf("Element found at node %d\n",c);
            return;
        }
        p=p->l;
        c++;
    }
    printf("Element not found");
}

void addnode(int n){
    node *p,*x;
    p=malloc(sizeof(node));
    p->a=n;
    p->l=NULL;
    if(s==NULL)
        s=p;
    else{
        x=s;
        while(x->l!=NULL){
            x=x->l;
        }
        x->l=p;
    }
}

void display(){
    node *p=s;
    if(s==NULL)
    printf("Linked List is empty");
    else{
        while(p!=NULL){
            printf("->%d",p->a);
            p=p->l;
        }
    }
}

int main(){
    int c=1,a,f;
    while(c!=0){
        printf("\nEnter elements of linked list\n");
        scanf("%d",&a);
        addnode(a);
        fflush(stdin);
        printf("Press 0 to quit: ");
        scanf("%d",&c);
    }
    display();
    printf("\nEnter element to be searched: ");
    scanf("%d",&f);
    nodesearch(f);
    return 0;
}