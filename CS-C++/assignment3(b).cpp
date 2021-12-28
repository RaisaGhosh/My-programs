#include <iostream>
#include <string.h>
using namespace std;

class Matrix{
    public:
     int a[5][5];

     Matrix(){
         int i,j;
         for(i=0;i<5;i++){
             for(j=0;j<5;j++){
                 a[i][j]=0;
             }
         }
     }

      Matrix(int x[5][5]){
         int i,j;
         for(i=0;i<5;i++){
             for(j=0;j<5;j++){
                 a[i][j]=x[i][j];
             }
         }
     }

     Matrix operator +(Matrix X){
         Matrix m;
         int i,j;
         for(i=0;i<5;i++){
             for(j=0;j<5;j++){
                 m.a[i][j]=a[i][j]+X.a[i][j];
             }
         }
         return m;
     }

     void display(){
        int i,j;
        for(i=0;i<5;i++){
         for(j=0;j<5;j++){
          cout<<a[i][j]<<"\t";
             }
         cout<<"\n";
         }
     }
};

int main(){
    int i,j,a[5][5],b[5][5];
    
    cout<<"Enter the elements of the first 5X5 Matrix,i.e, 25 elements\n";
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
         cin>>a[i][j];
             }
         }

    cout<<"Enter the elements of the second 5X5 Matrix,i.e, 25 element\n";
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
         cin>>b[i][j];
             }
         }

    Matrix M1(a),M2(b),M3;
    cout<<"\nThe first Matrix is \n";
    M1.display();
    cout<<"\nThe second Matrix is \n";
    M2.display();
    M3=M1+M2;
    cout<<"\nThe matrix sum is:\n";
    M3.display();
    return 0;
}