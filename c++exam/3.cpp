#include <iostream>
#include <string.h>
using namespace std;

class Employee{
    public:
    char name[100],dept[50];
    int age;
    double id;
    Employee(){
        char n[100],d[50];
        int a;
        double i;
        cout<<"\nEnter name, age, ID and department of employee : "<<endl;
        fflush(stdin);
        gets(n);
        fflush(stdin);
        cin>>a>>i>>d;
        strcpy(name,n);
        age=a;
        id=i;
        strcpy(dept,d);
        
    }
    void display(){
        cout<<"Name of the employee is : "<<name<<endl;
        cout<<"Age of the employee is : "<<age<<endl;
        cout<<"ID of the employee is : "<<id<<endl;
        cout<<"Department of the employee is : "<<dept<<endl;
        cout<<"\n\n";
       
    }
};

int main(){
    int n,i;
    cout<<"Enter the value of n : ";
    cin>>n;
    Employee *e=new Employee[n];
    cout<<"\n";

    for(i=0;i<n;i++){
        e[i].display();
    }
    delete[] e;

    return 0;
}