#include <iostream>
#include <string.h>
using namespace std;

class Shape{
    public:
    int s;
    float Area(int a[]){
        int m,n,o,p;
        if(s==1){
           return ((22*a[0]*a[0])/7);
        }
        else if(s==2){
           return(a[0]*a[1]);
        }
        else if(s==3){
            return ((a[0]+a[1])/2 * a[2]);
        }
        else
            return -999.0;
    }

    void display(){
        if(s==1){
            cout<<"Area of circle is : ";
        }
        if(s==2){
            cout<<"Area of rectangle is : ";
        }
        if(s==3){
            cout<<"Area of trapezoid is : ";
        }
    }
};

class Circle:public Shape{
    public:
    float ar;
    void Area(){
        int a[1];
        cout<<"Enter radius of circle : ";
        cin>>a[0];
        s=1;
        ar=Shape::Area(a);
    }
    void display(){
        Area();
        Shape::display();
        cout<<ar<<endl;
    }
};

class Rectangle:public Shape{
     public:
    float ar;
    void Area(){
        int a[2];
        cout<<"Enter length and breadth of rectangle : ";
        cin>>a[0]>>a[1];
        s=2;
        ar=Shape::Area(a);
    }
    void display(){
        Area();
        Shape::display();
        cout<<ar<<endl;
    }
};

class Trapezoid:public Shape{
    public:
    float ar;
    void Area(){
        int a[3];
        cout<<"Enter the two parallel sides and height : ";
        cin>>a[0]>>a[1]>>a[2];
        s=3;
        ar=Shape::Area(a);
    }
    void display(){
        Area();
        Shape::display();
        cout<<ar<<endl;
    }
};

int main(){
    int c;
    cout<<"Enter 1 for circle\nEnter 2 for rectangle\nEnter 3 for trapezoid\n"<<endl;
    cin>>c;
    if(c==1){
        Circle A;
        A.display();
    }
     if(c==2){
        Rectangle A;
        A.display();
    }
     if(c==3){
        Trapezoid A;
        A.display();
    }
    return 0;
}

