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

void delete(int pos){
    node *x;
    int c=0;
    x=start;
     while(c<pos-2){
        x=x->right;
        c++;
     }
        x->right=x->right->right;
        x->right->left=x;
    }

void delbegin(){
    printf("Deleted element is %d\n",start->a);
    start=start->right;
    start->left=NULL;

}
void delend(){
    node *x;
    x=start;
    while(x->right!=end){
        x=x->right;
    }
    printf("Deleted element is %d\n",x->right->a);
    end=x;
    x->right=NULL;
}

int main(){
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