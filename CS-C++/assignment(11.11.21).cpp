#include <iostream>
using namespace std;
void mod(int a,int d){
    int c=0;
    while(a>=d)
    {
        c++;
        a=a-d;
    }
    cout<<"\nThe quotient is : "<<c;
    cout<<"\nThe remainder is : "<<a<<endl;
}
void remainder(int x, int y) {
if( y == 0 ) {
cout<< "Attempted to divide by zero!"<<endl;
}
else{
    if(y<0){
    throw "Bad divisor choice. Divisor has to be positive!";
    }
}
mod(x,y);
}

int main () {
int i,j;
cout<<"Enter the dividend and divisor"<<endl;
cin>>i>>j;
try {
remainder(i, j);
}
catch (const char* e) {
cerr << e << endl;
cout<<"Enter new positive, non-zero divisor"<<endl;
cin>>j;
remainder(i,j);
}
return 0;
}