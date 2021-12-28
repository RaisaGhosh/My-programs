#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int a;
    struct node *l;
}node;

node *s=NULL,*firstaddress=NULL;
int counter=1;

void addnode(int n){
    node *link = NULL,*x;
    link=(node*)malloc(sizeof(node)); 
    link->a=n;
    link->l=firstaddress;
    if(s==NULL){
        s=link;
        s->l=s;
        firstaddress=s;
    }

    else{
     x=s;
     while(x->l!=firstaddress){
        x=x->l;
     }
    }
    x->l=link;
}

void deletenodeend(){
    int element;
    node *x;
    if(s==NULL){
        printf("Stack Underflow.\n");
        return;
    }
    if(s->l==s){
        element=s->a;
        s=NULL;
        printf("\nDeleted element: %d",element);
    }
    else{
        x=s;
        while(x->l->l!=firstaddress){
            x=x->l;
        }
        element=x->l->a;
        x->l=firstaddress;
        printf("\nDeleted element: %d",element);
        }
}

void deletenodefront(){
    int element;
    node *x;
    if(s==NULL){
        printf("Stack Underflow.\n");
        return;
    }
    if(s->l==s){
        element=s->a;
        s=NULL;
        printf("\nDeleted element: %d",element);
    }
    else{
        element=s->a;
        s=s->l;
        x=s;
        while(x->l!=firstaddress){
            x=x->l;
        }
        firstaddress=s;
        x->l=firstaddress;
        printf("\nDeleted element: %d",element);
        }
}

void display(){
    node *n;
    int c=1,ch;
    n=s;
    while(c<counter){
        printf("Node %d is %d\n",c,n->a);
        n=n->l;
        c++;
    }
}

int main(){
    int n,choice=1,p1,p2;
    while(choice==1){
    printf("\nEnter element to add to the linked list\n");
    scanf("%d",&n);
    counter++;
    addnode(n);
    display();
    
    fflush(stdin);

    printf("\nDo you want to delete element from front\nPress 1 for yes and 0 for no: ");
    scanf("%d",&p1);
    if(p1==1){
    counter--;
    deletenodefront();
    }
    fflush(stdin);

    printf("\nDo you want to delete element from end\nPress 1 for yes and 0 for no: ");
    scanf("%d",&p2);
    if(p2==1){
    counter--;
    deletenodeend();
    }
    fflush(stdin);

    printf("\nDo you want to continue\nPress 1 for yes and 0 for no: ");
    scanf("%d",&choice);
    fflush(stdin);
    }

    display();
    return 0;
}