#include <iostream>
#include <string.h>
using namespace std;

class Concatinate{
    public:
     char a[1000];

     Concatinate(){
        
     }

     Concatinate(char s[]){
        strcpy(a,s);
     }

     Concatinate operator +(Concatinate X){
         Concatinate Y;
         strcpy(Y.a,strcat(a,X.a));
         return Y;
     }
};

int main(){
    char a[1000],b[1000];
    cout<<"Enter any two strings\n";
    fflush(stdin);
    gets(a);
    fflush(stdin);
    gets(b);

    Concatinate C1(a),C2(b),C3;
    C3=C1+C2;
    cout<<"The concatinated string is = "<<C3.a<<"\n";

    return 0;
}
