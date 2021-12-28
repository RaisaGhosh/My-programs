#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node *left;
    int a;
    struct node *right;
}node;

void tree(node *track);
void display(node *l);

node* addnode(node *link,int n){
    int c;
    link=(node*)malloc(sizeof(node));
    link->a=n;
    link->left=NULL;
    link->right=NULL;
    printf("Do you want to continue adding nodes?\nPress 1 for yes and 0 for no.\n");
    scanf("%d",&c);
    if(c==1)
    tree(link);
    return link;
}

void tree(node *track){
    int l,lv,r,rv;
    printf("Do you want to add a node on the left side of current node?\nPress 1 for yes and 0 for no.\n");
    scanf("%d",&l);
    printf("Do you want to add a node on the right side of current node?\nPress 1 for yes and 0 for no.\n");
    scanf("%d",&r);
    if(l==1){
    printf("Enter the left node value : ");
    scanf("%d",&lv);
    track->left=addnode(track->left,lv);
    }
    if(r==1){
    printf("Enter the right node value : ");
    scanf("%d",&rv);
    track->right=addnode(track->right,rv);
    }
    }
     

void display(node *l){
    if(l->left!=NULL && l->right!=NULL)
        printf("left-%d   node-%d    right-%d\n",l->left->a,l->a,l->right->a);
    else{
        if(l->left!=NULL)
            printf("left-%d   node-%d    right-NULL\n",l->left->a,l->a);
        else{
            if(l->right!=NULL)
            printf("left-NULL   node-%d    right-%d\n",l->a,l->right->a);
            else
            printf("node-%d  is a leaf!\n",l->a);
        }
    }
}

void printing(node *pos){
        display(pos);
        if(pos->left!=NULL)
            printing(pos->left);
        if(pos->right!=NULL)
            printing(pos->right);
        
}

int main(){
    int x;
    printf("Enter the root node value : ");
    scanf("%d",&x);
    node *root=NULL;
    root=addnode(root,x);

   printing(root);
    

}