#include <stdio.h>
#include <stdlib.h>

int front=-1,rear=-1,max=5;
int arr[5];

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
    int i,k=1,c,n;
    while(k!=0){
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
    return 0;
}