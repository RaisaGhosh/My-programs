#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node *left;
    int a;
    struct node *right;
}node;

node *head;

void addnode(int n){
    node *link = NULL,*x;
    link=(node*)malloc(sizeof(node));  // why are we writing (node*) here???
    link->a=n;
    if(head->right==head){
        link->left=link;
        link->right=link;
        head->right=link;
    }
    else{
     x=head->right;
     while(x->right!=head->right){
        x=x->right;
     }
     link->left=x;
     link->right=head->right;
     x->right=link;
     head->right->left=link;
    }
    
}

void displayfront(){
    node *n;
    n=head->right;
    while(n->right!=head->right){
        printf(" -> %d",n->a);
        n=n->right;
    }
    printf(" -> %d",n->a);
    printf("\n");
}

void displayend(){
    node *n;
    n=head->right->left;
    while(n->left!=head->right->left){
        printf("%d <- ",n->a);
        n=n->left;
    }
    printf(" %d",n->a);
    printf("\n");
}


void insertbeg(int v){
    node *x=(node*)malloc(sizeof(node)),*y;
    x->a=v;
    x->left=head->right->left;
    x->right=head->right;
    y=head->right;
    while (y->right!=head->right)
    {
        y=y->right;
    }
    head->right->left=x;
    head->right=x;
    y->right=head->right;   
    
}

void delbegin(){
    node *x,*y;
    printf("Deleted element is %d\n",head->right->a);
    x=head->right->left;

    y=head->right;
    while(y->right!=head->right){
        y=y->right;
    }

    head->right=head->right->right;
    head->right->left=x;

    y->right=head->right;
}

void delend(){
    node *x;
    x=head->right;
    while(x->right->right!=head->right){
        x=x->right;
    }
    printf("Deleted element is %d\n",x->right->a);
    x->right=head->right;
    head->right->left=x;
}

void delete(int pos){
    node *x;
    if(pos==1){
        delbegin();
    }
    int c=0;
    x=head->right;
     while(c<pos-2){
        x=x->right;
        c++;
     }
        x->right=x->right->right;
        x->right->left=x;
    }

    
int main(){
    head=(node*)malloc(sizeof(node));
    head->left=head;
    head->right=head;
    int n,c=1,pos;
    while(c==1){
    printf("\nEnter element to add to the linked list\n");
    scanf("%d",&n);
    addnode(n);
    fflush(stdin);
    printf("Do you want to continue\nPress 1 for yes and 0 for no: ");
    scanf("%d",&c);
    fflush(stdin);
    }
    displayfront();
    displayend();
    printf("\nInserting 7 in the front\n");
    insertbeg(7);
    displayfront();
    displayend();
    printf("\nEnter delete position\n");
    scanf("%d",&pos);
    delete(pos);
    fflush(stdin);
    displayfront();
    delbegin();
    displayfront();
    displayend();
    delend();
    displayfront();
    displayend();
    return 0;
}