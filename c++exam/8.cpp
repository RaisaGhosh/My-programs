#include <iostream>
using namespace std;

class Rectangle{
    public:
    double l,b;
    Rectangle(){
        int x,y;
        cout<<"\nEnter the length and breadth of rectangle(from inside default constructor) : ";
        cin>>x>>y;
        l=x;
        b=y;
    }
    Rectangle(double x,double y){
        l=x;
        b=y;
    }
    void Calculate(){
        cout<<"\nPerimeter is : "<<2*(l+b)<<"\n";
        cout<<"Area is : "<<l*b<<"\n";
    }
};

int main(){
    int x,y;
    cout<<"Enter the length and breadth of rectangle : ";
    cin>>x>>y;
    Rectangle R1(x,y),R2;

    R1.Calculate();
    R2.Calculate();

}