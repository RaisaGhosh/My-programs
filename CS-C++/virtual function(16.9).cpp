#include <iostream>
#include <string.h>
using namespace std;

class Shape{
    public:
    virtual void Area(){

    }
    virtual void display(){

    }

};

class Circle:public Shape{
    public:
    float ar;
    Circle(){
        ar=0.0;
    }
    void Area(){
        int a;
        cout<<"Enter radius of circle : ";
        cin>>a;
        ar=(22*a*a)/7.0;
    }
    void display(){
        cout<<"Area of circle is : "<<ar<<endl;
    }
};

class Rectangle:public Shape{
     public:
    float ar;
    Rectangle(){
        ar=0.0;
    }
    void Area(){
        int l,b;
        cout<<"Enter length and breadth of rectangle : ";
        cin>>l>>b;
        ar=l*b;
    }
    void display(){
        cout<<"Area of rectangle is : "<<ar<<endl;
    }
};

class Trapezoid:public Shape{
    public:
    float ar;
    Trapezoid(){
        ar=0.0;
    }
    void Area(){
        int a,b,c;
        cout<<"Enter the two parallel sides and height : ";
        cin>>a>>b>>c;
        ar=(a+b)/2.0 * c;
    }
    void display(){
        cout<<"Area of trapezoid is : "<<ar<<endl;
    }
};

int main(){
    int c;
    Shape *s;
    cout<<"Enter 1 for circle\nEnter 2 for rectangle\nEnter 3 for trapezoid\n"<<endl;
    cin>>c;
    if(c==1){
        Circle A;
        s=&A;
        s->Area();
        s->display();
    }
     if(c==2){
        Rectangle A;
        s=&A;
        s->Area();
        s->display();
    }
     if(c==3){
        Trapezoid A;
        s=&A;
        s->Area();
        s->display();
    }
    return 0;
}

