#include <iostream>
#include <stdlib.h>
using namespace std;

template <class T>
class CircularLinkedList{

public:

    typedef struct node{
        struct node *left;
        T a;
        struct node *right;
    }node;

    node *head;

    CircularLinkedList(){
        head=(node*)malloc(sizeof(node));
        head->left=head;
        head->right=head;
    }

    void addnode(T n){
        node *link = NULL,*x;
        link=(node*)malloc(sizeof(node)); 
        link->a=n;
        if(head->right==head){
            link->left=link;
            link->right=link;
            head->right=link;
        }
        else{
            x=head->right;
            while(x->right!=head->right){
                x=x->right;
            }
            link->left=x;
            link->right=head->right;
            x->right=link;
            head->right->left=link;
        }
        
    }

    void displayfront(){
        node *n;
        n=head->right;
        while(n->right!=head->right){
            cout<<" -> "<<n->a;
            n=n->right;
        }
        cout<<" -> "<<n->a;
        cout<<"\n";
    }

    void displayend(){
        node *n;
        n=head->right->left;
        while(n->left!=head->right->left){
            cout<<" <- "<<n->a;
            n=n->left;
        }
        cout<<" <-"<<n->a;
        cout<<"\n";
    }


    void insertbeg(T v){
        node *x=(node*)malloc(sizeof(node)),*y;
        x->a=v;
        x->left=head->right->left;
        x->right=head->right;
        y=head->right;
        while (y->right!=head->right)
        {
            y=y->right;
        }
        head->right->left=x;
        head->right=x;
        y->right=head->right;   
        
    }

    void delbegin(){
        node *x,*y;
        cout<<"\nDeleted element is : "<<head->right->a<<endl;
        x=head->right->left;

        y=head->right;
        while(y->right!=head->right){
            y=y->right;
        }
        head->right=head->right->right;
        head->right->left=x;
        y->right=head->right;
    }

    void delend(){
        node *x;
        x=head->right;
        while(x->right->right!=head->right){
            x=x->right;
        }
        cout<<"\nDeleted element is : "<<x->right->a<<endl;
        x->right=head->right;
        head->right->left=x;
    }

    void deletePos(int pos){
        node *x;
        if(pos==1){
            delbegin();
        }
        int c=0;
        x=head->right;
        while(c<pos-2){
            x=x->right;
            c++;
        }
            cout<<"\nDeleted element is : "<<x->right->a<<endl;
            x->right=x->right->right;
            x->right->left=x;
        }

};
    
int main(){
    int x,y;

    cout<<"\nPress 1 for Integer linked list, 2 for Double linked list : ";
    cin>>x;

    if(x==1){
        CircularLinkedList<int> C1;
        int n,c=1,pos;

        while(c==1){
        cout<<"\nEnter element to add to the linked list\n";
        cin>>n;

        cout<<"Press 1 for to add element in the front end, 2 to add element in the rear end : ";
        cin>>y;

        if(y==1){
        C1.insertbeg(n);
        fflush(stdin);
        cout<<"Do you want to continue\nPress 1 for yes and 0 for no: ";
        cin>>c;
        fflush(stdin);
        }
        else{
        C1.addnode(n);
        fflush(stdin);
        cout<<"Do you want to continue\nPress 1 for yes and 0 for no: ";
        cin>>c;
        fflush(stdin);
        }
        }

        cout<<"\n\nDisplaying from front end :\n";
        C1.displayfront();
        cout<<"\n\nDisplaying from rear end :\n";
        C1.displayend();
        cout<<"\n\n";
    
        cout<<"Press 1 for to delete element in the front end, 2 to delete element in the rear end and 3 to delete element from particular position : ";
        cin>>y;

        if(y==1){
        C1.delbegin();
        cout<<"\nDisplaying from front end :\n";
        C1.displayfront();
        cout<<"\nDisplaying from rear end :\n";
        C1.displayend();
        }

        if(y==2){
        C1.delend();
        cout<<"\nDisplaying from front end :\n";
        C1.displayfront();
        cout<<"\nDisplaying from rear end :\n";
        C1.displayend();
        }

        if(y==3){
        cout<<"\nEnter delete position from front\n";
        cin>>pos;
        C1.deletePos(pos);
        fflush(stdin);
        cout<<"\nDisplaying from front end :\n";
        C1.displayfront();
        cout<<"\nDisplaying from rear end :\n";
        C1.displayend();
        }
    }
    else{
        if(x==2){
            CircularLinkedList<double> C1;
            int c=1,pos;
            double n;

            while(c==1){
            cout<<"\nEnter element to add to the linked list\n";
            cin>>n;

            cout<<"Press 1 for to add element in the front end, 2 to add element in the rear end : ";
            cin>>y;

            if(y==1){
            C1.insertbeg(n);
            fflush(stdin);
            cout<<"Do you want to continue\nPress 1 for yes and 0 for no: ";
            cin>>c;
            fflush(stdin);
            }
            else{
            C1.addnode(n);
            fflush(stdin);
            cout<<"Do you want to continue\nPress 1 for yes and 0 for no: ";
            cin>>c;
            fflush(stdin);
            }
            }

            cout<<"\n\nDisplaying from front end :\n";
            C1.displayfront();
            cout<<"\n\nDisplaying from rear end :\n";
            C1.displayend();
            cout<<"\n\n";
        
            cout<<"Press 1 for to delete element in the front end, 2 to delete element in the rear end and 3 to delete element from particular position : ";
            cin>>y;

            if(y==1){
            C1.delbegin();
            cout<<"\nDisplaying from front end :\n";
            C1.displayfront();
            cout<<"\nDisplaying from rear end :\n";
            C1.displayend();
            }

            if(y==2){
            C1.delend();
            cout<<"\nDisplaying from front end :\n";
            C1.displayfront();
            cout<<"\nDisplaying from rear end :\n";
            C1.displayend();
            }

            if(y==3){
            cout<<"\nEnter delete position from front\n";
            cin>>pos;
            C1.deletePos(pos);
            fflush(stdin);
            cout<<"\nDisplaying from front end :\n";
            C1.displayfront();
            cout<<"\nDisplaying from rear end :\n";
            C1.displayend();
            }
        }
        else{
            cout<<"Invalid data type choice!"<<endl;
        }
    }
    return 0;
}