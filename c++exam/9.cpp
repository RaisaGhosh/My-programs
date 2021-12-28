#include <iostream>
using namespace std;

typedef struct node
{
    int a;
    node *l;
}node;


class LinkedList{
    public:
    node *s;

    LinkedList(){
        s=NULL;
    }

    void insert_at_end(int x){
        node *link=(node*)malloc(sizeof(node)),*t;
        link->a=x;
        link->l=NULL;

        if(s==NULL){
            s=link;
        }
        else{
            t=s;
            while(t->l!=NULL){
                t=t->l;
            }
            t->l=link;
        }
        display();
    }

    void display(){
        node *t=s;
        while(t->l!=NULL){
            cout<<t->a<<"->";
            t=t->l;
        }
        cout<<t->a;
    }
    
};

int main(){
    int c=1,a;
    LinkedList L1;
    while(c!=0){
        cout<<"Enter the value you want to add to linked list : ";
        cin>>a;
        L1.insert_at_end(a);
        cout<<"\nPress 0 to stop and non zero number to continue : ";
        cin>>c;
    }
    cout<<"\n";
    L1.display();
}