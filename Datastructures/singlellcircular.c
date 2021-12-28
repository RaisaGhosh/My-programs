#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int a;
    struct node *l;
}node;

node* head;

void addnode(int n){
    node *link = NULL,*x;
    link=(node*)malloc(sizeof(node)); 
    link->a=n;
    if(head->l==head){
        head->l=link;
        link->l=head->l;
    }

    else{
     x=head->l;
     while(x->l!=head->l){
        x=x->l;
     }
     x->l=link;
     link->l=head->l;
    }
}

void deletenodeend(){
    int element;
    node *x;
    if(head->l==head){
        printf("Stack Underflow.\n");
        return;
    }
    if(head->l==head->l->l){
        element=head->l->a;
        head->l=head;
        printf("\nDeleted element: %d",element);
    }
    else{
        x=head->l;
        while(x->l->l!=head->l){
            x=x->l;
        }
        element=x->l->a;
        x->l=head->l;
        printf("\nDeleted element: %d",element);
        }
}

void deletenodefront(){
    int element;
    node *x;
    if(head->l==head){
        printf("Stack Underflow.\n");
        return;
    }
    if(head->l==head->l->l){
        element=head->l->a;
        head->l=head;
        printf("\nDeleted element: %d",element);
    }
    else{
        element=head->l->a;
        x=head->l;
        while(x->l!=head->l){
            x=x->l;
        }
        x->l=head->l->l;
        head->l=head->l->l;
        printf("\nDeleted element: %d",element);
        }
}

void display(){
    node *n;
    int c=1;
    n=head->l;
    while(n->l!=head->l){
        printf("Node %d is %d\n",c,n->a);
        n=n->l;
        c++;
    }
    printf("Node %d is %d\n",c,n->a);
}

int main(){
    head=(node*)malloc(sizeof(node));
    head->l=head;
    int n,c=1,p1,p2;
    while(c==1){
    printf("\nEnter element to add to the linked list\n");
    scanf("%d",&n);
    addnode(n);
    fflush(stdin);
    display();

    printf("\nDo you want to delete element from front\nPress 1 for yes and 0 for no: ");
    scanf("%d",&p1);
    if(p1==1){
    deletenodefront();
    }
    fflush(stdin);
    

    printf("\nDo you want to delete element from end\nPress 1 for yes and 0 for no: ");
    scanf("%d",&p2);
    if(p2==1){
    deletenodeend();
    }
    fflush(stdin);

    display();

    printf("\nDo you want to continue\nPress 1 for yes and 0 for no: ");
    scanf("%d",&c);
    fflush(stdin);

    }

    display();
    return 0;
}