#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int a;
    int e;
    struct node *l;
}node;

node *pol1=NULL,*pol2=NULL,*add=NULL,*mul=NULL;

node* addnode(node *get,int x,int y){
    node *link,*t;
    link=(node *)malloc(sizeof(node));
    link->a=x;
    link->e=y;
    link->l=NULL;
    if(get==NULL){
        get=link;
        return get;
    }
    else{
        t=get;
        while(t->l!=NULL){
            t=t->l;
        }
        t->l=link;
        return get;
    }
}

void display(node *n){
    while(n->l!=NULL){
        printf("%dx^%d + ",n->a,n->e);
        n=n->l;
    }
    printf("%dx^%d",n->a,n->e);
}

node* polAdd(node *p1,node *p2){

    while(p1!=NULL && p2!=NULL){
    if(p1->e==p2->e){
        add=addnode(add,p1->a+p2->a,p1->e);
        p1=p1->l;
        p2=p2->l;
    }
    else
    {
        if(p1->e < p2->e){
            add=addnode(add,p1->a,p1->e);
            p1=p1->l;
        }
        else{
            if(p2->e < p1->e){
            add=addnode(add,p2->a,p2->e);
            p2=p2->l;
             }
        }
    }
    }
    while(p1!=NULL){
        add=addnode(add,p1->a,p1->e);
        p1=p1->l;
    }

     while(p2!=NULL){
       add=addnode(add,p2->a,p2->e);
       p2=p2->l;
    }


    return add;
}


node* polMul(node* pol1, node* pol2)
{ 
    node *ptr1, *ptr2;
    ptr1 = pol1;
    ptr2 = pol2;
    while (ptr1 != NULL) {
        while (ptr2 != NULL) {

            mul= addnode(mul, ptr1->a * ptr2->a, ptr1->e + ptr2->e);
            ptr2 = ptr2->l;
        }
        ptr2 = pol2;
        ptr1 = ptr1->l;
    }

    return mul;
}

int main(){
    pol1=addnode(pol1,6,1);
    pol1=addnode(pol1,5,9);
    pol2=addnode(pol2,4,2);
    pol2=addnode(pol2,3,8);
    printf("Polynomial 1 is : ");
    display(pol1);
     printf("\n");
    printf("Polynomial 2 is : ");
    display(pol2);
     printf("\n");

    printf("Sum is : ");
    add=polAdd(pol1,pol2);
    display(add);
     printf("\n");

    printf("Multiplication is : ");
    mul=polMul(pol1,pol2);
      display(mul);
    printf("\n");

    return 0;
}