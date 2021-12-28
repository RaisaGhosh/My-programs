#include <iostream>
#include <string.h>
using namespace std;

class Stack{
    public:
    int top=-1,max;
    int *arr=NULL;

    Stack(int a){
        max=a;
    }

    void push(){
        int n;
        if(top==(max-1)){
            printf("\nStack Overflow\n");
            return;
        }
        else
        {   printf("\nEnter the element to be added\n");
            cin>>n;
            top++;
            arr[top]=n;

        }
        display();
    }

    int pop(){
        int a;
        if(top==-1){
            printf("\nStack underflow\n");
            display();
            return 0;
        }
        else
        {
            a=arr[top];
            top--;
            display();
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
};

int main(){
    int x=1,c,n,s;
    cout<<"Enter the maximum limit of array : ";
    cin>>n;
    Stack S1(n);
    S1.arr=new int[n];
    while(x!=0){
        printf("\nEnter 1 for pushing element into stack\nEnter 2 for popping element from stack\nEnter 3 to display stack elements\n");
        scanf("%d",&c);
        switch(c){
            case 1:S1.push();
                   break;
        
            case 2:n=S1.pop();
                if(n!=0)
                    printf("\nPopped element : %d\n",n);
                break;
        
            case 3:S1.display();
                break;

            default:printf("INVALID CHOICE");
        
    }
        printf("\nTo stop press 0,to continue press any non-zero element\n");
        scanf("%d",&x);
}
    return 0;
}