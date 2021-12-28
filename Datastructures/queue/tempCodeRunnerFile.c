#include <stdio.h>
#include <stdlib.h>

int front=-1,rear=-1,max=5;
int arr[5];

void insert(int n){
    if(front==(rear+1)%max){
        printf("\nQUEUE OVERFLOW\n");
        return;
    }
    else if(rear==-1 && front==-1){
        rear=0;
        front=0;
    }
        else
          {
            if(rear<max-1)
                rear++;
            else
                rear=rear-max+1;
          }

    arr[rear]=n;

}

int delete(){
    int a;
    if((front==-1 && rear==-1)) {
        printf("\nQUEUE UNDERFLOW\n");
        return 0;
    }
    else
    {
        a=arr[front];
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            if(front<max-1)
                front++;
            else
                front=front-max+1;

        }
        return a;
    }
    
}

void display(){
    int i;
    if(front==-1 && rear==-1){
        printf("\nNO ELEMENTS IN THE QUEUE\n");
        return ;
    }

    printf("\nQUEUE ELELMENTS ARE : ");
    if(front>rear){
        for(i=front;i<max;i++){
            printf("%d ",arr[i]);
        }
        for(i=0;i<=rear;i++){
            printf("%d ",arr[i]);
        }
        }
    else{
        for(i=front;i<=rear;i++){
        printf("%d ",arr[i]);
    }
    }

    // printf("\nxxxxxxxxx : ");
    // for(i=0;i<5;i++){
    //     printf("%d",arr[i]);
    // }
    // printf("\n");
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
               if(n!=0)
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