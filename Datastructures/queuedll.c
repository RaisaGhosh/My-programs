#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node *left;
    int a;
    struct node *right;
}node;

node *start=NULL,*end=NULL;
int front=-1,rear=-1,max=5;
int arr[5];

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

void delbegin(){
    printf("Deleted element is %d\n",start->a);
    start=start->right;
    start->left=NULL;

}

void insert(int n){
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

int delete(){
    int a;
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

void display(){
    int i;
    if(front==-1 || front>rear){
        printf("\nNO ELEMENTS IN THE QUEUE\n");
        return ;
    }
    printf("\nQUEUE ELELMENTS ARE : ");
    for(i=front;i<=rear;i++){
        printf("%d ",arr[i]);
    }

}

    int main(){
    int i,k=1,c,n,queueorll;
    printf("Enter 1 to use array to implement queue\nEnter 2 use linked list to implement queue\n");
    scanf("%d",&queueorll);
    switch(queueorll){
    case 1:while(k!=0){
            printf("Enter 1 to insert\nEnter 2 to delete\nEnter 3 to display\n");
            scanf("%d",&c);
            switch (c)
            {
            case 1:printf("Enter what you want to insert : ");
                scanf("%d",&n);
                insert(n);
                break;
            case 2:n=delete();
                printf("The deleted item is : %d",n);
                break;
            case 3:display();
                break;
            
            default:printf("Invalid choice");
            }
            printf("\nEnter 0 to stop and any non-zero number to continue\n");
            scanf("%d",&k);
            }
            break;
    case 2:while(k!=0){
            printf("Enter 1 to insert\nEnter 2 to delete\nEnter 3 to display\n");
            scanf("%d",&c);
            switch (c)
            {
            case 1:printf("Enter what you want to insert : ");
                    scanf("%d",&n);
                    addnode(n);
                    break;
            case 2:delbegin();
                   break;
            case 3:displayfront();
                    displayend();
                    break;
            
            default:printf("Invalid choice");
            }
            printf("\nEnter 0 to stop and any non-zero number to continue\n");
            scanf("%d",&k);
            }
            break;
    default:printf("Invalid choice to implement queue");
    
    }
    return 0;
}
