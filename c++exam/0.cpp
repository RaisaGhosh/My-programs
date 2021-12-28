#include <iostream>
using namespace std;

class Area{
    public:
    double a;

    void display(){
        cout<<"Area of the circle is : "<<a<<endl;
    }
};

class Circle:public Area{
    public:
    int radius;
    Circle(int x){
        radius=x;
        a=(22*radius*radius)/7.0;
    }
};

class CirclePeri:public Circle{
    public:
    double peri;
    CirclePeri(int x):Circle(x){
        peri=(2*22*radius)/7.0;
    }
    void display(){
        Circle::display();
        cout<<"Perimeter of circle is : "<<peri<<endl;
    }
};

class Circle1:private Area{
    public:
    int radius;
    Circle1(int x){
        radius=x;
        a=(22*radius*radius)/7.0;
    }

    void display(){
        Area::display();
    }
};

class CirclePeri1:private Circle1{
    public:
    double peri;
    CirclePeri1(int x):Circle1(x){
        peri=(2*22*radius)/7.0;
    }
    void display(){
        Circle1::display();
        cout<<"Perimeter of circle is : "<<peri<<endl;
    }
};

int main(){
    int a,b;
    cout<<"Enter the circle radius to find area and perimeter using multi-level public inheritance : ";
    cin>>a;
    CirclePeri C1(a);
    C1.display();

    cout<<"\nEnter the circle radius to find area and perimeter using multi-level private inheritance : ";
    cin>>b;
    CirclePeri1 C2(b);
    C2.display();
}