#include <stdio.h>
#include <stdlib.h>

int top=-1,max=5;
int arr[5];

void push(int n){
    if(top==(max-1)){
        printf("\nStack Overflow\n");
        return;
    }
    else
    {
        top++;
        arr[top]=n;

    }
}

int pop(){
    int a;
    if(top==-1){
        printf("\nStack underflow\n");
        return 0;
    }
    else
    {
        a=arr[top];
        top--;
        return a;
    }
}

void display(){
    if(top==-1){
        printf("\nNo element in stack to display\n");
        return;
    }
    int i;
    printf("\nArray elements are : ");
    for(i=0;i<=top;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int x=1,c,n;
    while(x!=0){
        printf("Enter 1 for pushing element into stack\nEnter 2 for popping element from stack\nEnter 3 to display stack elements\n");
        scanf("%d",&c);
        switch(c){
            case 1:printf("\nEnter the element to be added\n");
                scanf("%d",&n);
                push(n);
                break;
        
            case 2:n=pop();
                if(n!=0)
                    printf("\nPopped element : %d\n",n);
                break;
        
            case 3:display();
                break;

            default:printf("INVALID CHOICE");
        
    }
        printf("\nTo stop press 0,to continue press any non-zero element\n");
        scanf("%d",&x);
}
    return 0;
}