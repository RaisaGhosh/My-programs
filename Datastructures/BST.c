//took help
#include <stdio.h>
#include <stdlib.h>

typedef struct bstnode
{
    int key;
    struct bstnode *left;
    struct bstnode *right;
}bstnode;

bstnode* insert(bstnode* root,int data){
    bstnode *newnode;
    if(root==NULL){
        newnode=(bstnode *)malloc(sizeof(bstnode));
        newnode->key=data;
        newnode->left=NULL;
        newnode->right=NULL;
        return newnode;
    }
    else{
        if(root->key>data){
            root->left=insert(root->left,data);
        }
        else{
            if(root->key<data){
            root->right=insert(root->right,data);
        }
        }
        return root;
    }

}

void display(bstnode *l){
    if(l->left!=NULL && l->right!=NULL)
        printf("left-%d   node-%d    right-%d\n",l->left->key,l->key,l->right->key);
    else{
        if(l->left!=NULL)
            printf("left-%d   node-%d    right-NULL\n",l->left->key,l->key);
        else{
            if(l->right!=NULL)
            printf("left-NULL   node-%d    right-%d\n",l->key,l->right->key);
            else
            printf("node-%d  is a leaf!\n",l->key);
        }
    }
}

void printing(bstnode *pos){
        display(pos);
        if(pos->left!=NULL)
            printing(pos->left);
        if(pos->right!=NULL)
            printing(pos->right);
        
}

int main(){
    bstnode *root=NULL;
    int c=1,x;
    while (c==1)
    {
        printf("Do you want to add elements in the BST?\nPress 1 for Yes & 0 for No!\n");
        scanf("%d",&c);
        if(c==0)
        break;
        printf("\nEnter the number you want to add(make sure no repetition) : ");
        scanf("%d",&x);
        root=insert(root,x);
        fflush(stdin);
    }
    
   printing(root);
    

}
