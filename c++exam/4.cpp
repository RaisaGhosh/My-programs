#include <iostream>
#include <string.h>
using namespace std;

template <class T>
class Stack{
    public:
    int top,max;
    T *arr;

    Stack(int a){
        max=a;
        top=-1;
        arr=NULL;
    }

    void push(){
        T n;
        if(top==(max-1)){
            cout<<"\nStack Overflow\n";
            return;
        }
        else
        {   cout<<"\nEnter the element to be added\n";
            cin>>n;
            arr[++top]=n;

        }
        display();
    }

    T pop(){
        T a;
        if(top==-1){
            cout<<"\nStack underflow\n";
            return 0;
        }

        else
        {
            a=arr[top];
            top--;
            cout<<"The stack after popping is :- ";
            display();
            cout<<"\n";
            return a;
        }
        
    }

    void display(){
        if(top==-1){
            cout<<"\nNo element in stack to display\n";
            return;
        }
        int i;
        cout<<"\nArray elements are : ";
        for(i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    int x=1,c,n,s,dt;
    int n1;
    double n2;
    cout<<"Enter the maximum limit of array : ";
    cin>>n;
    cout<<"Enter 1 for Integer datatype stack,2 for Double datatype stack : ";
    cin>>dt;
    
    if(dt==1){  
        Stack<int> S1(n);
        S1.arr=new int[n];

        while(x!=0){
                cout<<"\nEnter 1 for pushing element into stack\nEnter 2 for popping element from stack\nEnter 3 to display stack elements\n";
                cin>>c;

                switch(c){
                    case 1:S1.push();
                        break;
                
                    case 2:n1=S1.pop();
                        if(n1!=0)
                        cout<<"\nPopped element : "<<n1;
                        break;
                
                    case 3:S1.display();
                        break;

                    default:cout<<"INVALID CHOICE";
                
            }
                cout<<"\nTo stop press 0,to continue press any non-zero element\n";
                cin>>x;
        }
            return 0;
                }

        else{
                if(dt==2){
                    Stack<double> S1(n);
                    S1.arr=new double[n];

                    while(x!=0){
                            cout<<"\nEnter 1 for pushing element into stack\nEnter 2 for popping element from stack\nEnter 3 to display stack elements\n";
                            cin>>c;

                            switch(c){
                                case 1:S1.push();
                                    break;
                            
                                case 2:n2=S1.pop();
                                    if(n2!=0)
                                    cout<<"\nPopped element : "<<n2;
                                    break;
                            
                                case 3:S1.display();
                                    break;

                                default:cout<<"INVALID CHOICE";
                            
                        }
                            cout<<"\nTo stop press 0,to continue press any non-zero element\n";
                            cin>>x;
                    }
                        return 0;
                    }

                else
                {
                    cout<<"Invalid datatype choice";
                    return 0;
                }
    }

}