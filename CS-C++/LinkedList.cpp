#include <iostream>
#include <string.h>
using namespace std;

class LinkedList{
public:
    typedef struct node{
        int a;
        struct node *l;
    }node;

    node *s;

    LinkedList(){
        s=NULL;
    }
    

    void addnode(int n){
        node *link = NULL,*x;
        link=new node;  
        link->a=n;
        link->l=NULL;
        if(s==NULL){
            s=link;
        }
        else{
        x=s;
        while(x->l!=NULL){
            x=x->l;
        }
        x->l=link;
    }
    }

    void display(){
        node *n;
        int c=1;
        n=s;
        while(n!=NULL){
            printf("Node %d is %d\n",c,n->a);
            n=n->l;
            c++;
        }
    }
};

int main(){
    int n,c=1;
    LinkedList L1;
    while(c==1){
    cout<<"\nEnter element to add to the linked list : ";
    cin>>n;
    L1.addnode(n);
    cout<<"\n";
    L1.display();
    cout<<"\n"<<endl;
    
    fflush(stdin);
    cout<<"Do you want to continue\nPress 1 for yes and 0 for no: ";
    cin>>c;
    fflush(stdin);
    }
    cout<<"\nThe final Linked List is :\n";
    L1.display();
    return 0;
}