//took help
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node *left;
    int a;
    struct node *right;
}node;

void tree(node *track);
void display(node *l);

int front=-1,rear=-1,max=100;
node* arr[100];

void push(node* n){
    if(rear==max-1){
        printf("\nQUEUE OVERFLOW\n");
        return;
    }
    else if(rear==-1 && front==-1){
        rear=0;
        front=0;
    }
        else
          rear++;

    arr[rear]=n;

}

node* firstelement(){
   return arr[front];
}

node* pop(){
    node* a;
    if(front==-1 || front>rear){
        printf("\nQUEUE UNDERFLOW\n");
        return 0;
    }
    else
    {
        a=arr[front];
        front++;
        return a;
    }
}

int isempty(){
    if(front==-1 || front>rear)
    return 1;
    else
    return 0;
}

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

void breadthfirst(node *root){
    node* current;
    if(root==NULL)
     return;

    push(root);
    while (isempty()==0)
    {
        // printf("\ncccccc");
        current=firstelement();
        printf("%d  ",current->a);
        if(current->left!=NULL){
            push(current->left);
        }
        if(current->right!=NULL){
            push(current->right);
        }
        pop();
    }
    printf("\n");
}

void Preorder(node *n){
    if(n==NULL)
    return;
    else{
        printf("%d ",n->a);
        Preorder(n->left);
        Preorder(n->right);
    }
}

void Inorder(node *n){
    if(n==NULL)
    return;
    else{
        Inorder(n->left);
        printf("%d ",n->a);
        Inorder(n->right);
    }
}

void Postorder(node *n){
    if(n==NULL)
    return;
    else{
        Postorder(n->left);
        Postorder(n->right);
        printf("%d ",n->a);
    }
}

void depthfirst(node *n){
    int c;
    printf("Press 1 for Preorder traversal\nPress 2 for Inorder traversal\nPress 3 for Postorder traversal\n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:Preorder(n);
           printf("\n");
           break;
    case 2:Inorder(n);
           printf("\n");
           break;
    case 3:Postorder(n);
           printf("\n");
           break;
    
    default:printf("Invalid traversal choice.");
    }

}

int main(){
    int x,c;
    node* k;
    node *root=NULL;
    printf("Enter the root node value : ");
    scanf("%d",&x);
    root=addnode(root,x);
    
   k=root;
   printing(k);
   printf("\n");

   printf("Press 1 for Breadth First traversal\nPress 2 for Depth First traversal\n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:breadthfirst(root);
            break;

    case 2:depthfirst(root);
           break;
    
    default:printf("Invalid traversal choice");

    }

    return 0;

}