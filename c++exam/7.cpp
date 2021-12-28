#include <iostream>
using namespace std;

class Swapping{
    public:
    int a;
    float b;

    Swapping(int x,float y){
        a=x;
        b=y;
    }

    void swap(Swapping *S1){
        int x;
        float y;
        x=S1->a;
        S1->a=a;
        a=x;
        y=S1->b;
        S1->b=b;
        b=y;
    }

    void display(){
        cout<<"Integer item is : "<<a<<endl;
        cout<<"Float item is : "<<b<<endl;
    }

};

int main(){
    Swapping S1(5,5.6),S2(6,6.7);
    cout<<"Before Swapping\n";
    cout<<"For Object 1 :- "<<endl;
    S1.display();
    cout<<"\nFor Object 2 :- "<<endl;
    S2.display();

    S1.swap(&S2);

    cout<<"\nAfter Swapping";
    cout<<"\nFor Object 1 :- "<<endl;
    S1.display();
    cout<<"\nFor Object 2 :- "<<endl;
    S2.display();

    return 0;
}