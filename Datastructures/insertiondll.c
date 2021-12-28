#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node *left;
    int a;
    struct node *right;
}node;

node *start=NULL,*end=NULL;

void addnode(int n){
    node *link = NULL,*x;
    link=(node*)malloc(sizeof(node));  // why are we writing (node*) here???
    link->a=n;
    link->left=NULL;
    link->right=NULL;
    if(start==NULL){
        start=link;
    }
    else{
     x=start;
     while(x->right!=NULL){
        x=x->right;
     }
     link->left=x;
     x->right=link;
     end=x->right;
    }
    
    
}

void insert(int p,int v){
    node *value=NULL,*c;
    int i;
    value->a=v;
    c=start;
     printf("yyy\n");
    for(i=1;i<p-2;i++){
         printf("zzz\n");
        c=c->right;
    }
    printf("aaa\n");
    value->left=c->right;
     printf("bbb\n");
    value->right=(c->right)->right;
     printf("ccc\n");
    (c->right)->right->left=value;
     printf("ddd\n");
    c->right->right=value;
     printf("eee\n");
    
}

void displayfront(){
    node *n;
    n=start;
    while(n!=NULL){
        printf(" -> %d",n->a);
        n=n->right;
    }
    printf("\n");
}

void displayend(){
    node *n;
    n=end;
    while(n!=NULL){
        printf("%d <- ",n->a);
        n=n->left;
    }
    printf("\n");
}

int main(){
    int n,c=1,i;
    while(c==1){
    printf("\nEnter element to add to the linked list\n");
    scanf("%d",&n);
    addnode(n);
    fflush(stdin);
    printf("Do you want to continue\nPress 1 for yes and 0 for no: ");
    scanf("%d",&c);
    fflush(stdin);
    }
    printf("Enter insertion position");
    scanf("%d",&i);
    insert(i,5);
    displayfront();
    displayend();
    return 0;
}