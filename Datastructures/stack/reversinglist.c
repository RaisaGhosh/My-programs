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
    for(i=0;i<=top;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int i,n;
    int a[5];
    printf("Enter the array elments\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        push(a[i]);
    }
    printf("Array elements in reverse order is : ");
    for(i=0;i<5;i++){
        n=pop();
        printf("%d ",n);
    }
    return 0;
}