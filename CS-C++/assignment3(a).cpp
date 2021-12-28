#include <iostream>
#include <string.h>
using namespace std;

class Complex{
    public:
     double r,c;

     Complex(){
         r=0;
         c=0;
     }
     
     Complex(double a,double b){
         r=a;
         c=b;
     }

     Complex operator +(Complex X){
         Complex a;
         a.r=r+X.r;
         a.c=c+X.c;
         return a;
     }
};

int main(){
    int a,b,c,d;
    cout<<"Enter the real and complex part of first number\n";
    cin>>a>>b;
    cout<<"Enter the real and complex part of second number\n";
    cin>>c>>d;

    Complex C1(a,b),C2(c,d),C3;
    C3=C1+C2;
    cout<<"The addition of the 2 complex numbers is = "<<C3.r<<" + "<<C3.c<<"i\n";
}