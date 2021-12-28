#include <iostream>
#include <string.h>
using namespace std;

class Merge{
public:
int front,rear,max;
int arr[5],m[10];

Merge(){
    front=-1;
    rear=-1;
    max=5;
}

void insert(int n){
    if(rear==max-1){
        cout<<"\nQUEUE OVERFLOW\n";
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

int Delete(){
    int a;
    if(front==-1 || front>rear){
        cout<<"\nQUEUE UNDERFLOW\n";
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
        cout<<"\nNO ELEMENTS IN THE QUEUE\n";
        return ;
    }
    cout<<"\nQUEUE ELELMENTS ARE : ";
    for(i=front;i<=rear;i++){
        cout<<arr[i]<<" ";
    }

}

void mergedisp(){
    int i;
    for(i=front;i<=rear;i++){
        cout<<arr[i]<<" ";
    }
}

};

int main(){
    int i,k=1,c,n;
    Merge M1,M2;
    while(k!=0){
        cout<<"FOR QUEUE 1\nEnter 1 to insert\nEnter 2 to delete\nEnter 3 to display\n";
        cin>>c;
        switch (c)
        {
        case 1:cout<<"Enter what you want to insert : ";
               cin>>n;
               M1.insert(n);
               break;
        case 2:n=M1.Delete();
               cout<<"The deleted item is :"<<n;
               break;
        case 3:M1.display();
               break;
        
        default:cout<<"Invalid choice";
        }
        fflush(stdin);
        cout<<"\nEnter 0 to stop and any non-zero number to continue\n";
        cin>>k;
    }
   
   k=1;

   while(k!=0){
        cout<<"FOR QUEUE 2\nEnter 1 to insert\nEnter 2 to delete\nEnter 3 to display\n";
        cin>>c;
        switch (c)
        {
        case 1:cout<<"Enter what you want to insert : ";
               cin>>n;
               M2.insert(n);
               break;
        case 2:n=M2.Delete();
               cout<<"The deleted item is :"<<n;
               break;
        case 3:M2.display();
               break;
        
        default:cout<<"Invalid choice";
        }
        fflush(stdin);
        cout<<"\nEnter 0 to stop and any non-zero number to continue\n";
        cin>>k;
    }

    cout<<"\nTHE MERGED QUEUE IS :\n";
    M1.mergedisp();
    M2.mergedisp();
    cout<<"\n";
    return 0;
}