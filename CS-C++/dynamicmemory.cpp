#include <iostream>
#include <string.h>
#include<string.h>
using namespace std;

class Person{
    public:
    char name[100];
    int age;
    double height,weight;
    Person(){
        char n[100];
        int a;
        double h,w;
        cout<<"\nEnter name, age, height and weight of person : "<<endl;
        fflush(stdin);
        gets(n);
        fflush(stdin);
        cin>>a>>h>>w;
        strcpy(name,n);
        age=a;
        height=h;
        weight=w;
    }
    ~Person(){
        cout<<"Name of the person is : "<<name<<endl;
        cout<<"Age of the person is : "<<age<<endl;
        cout<<"Height of the person is : "<<height<<endl;
        cout<<"Weight of the person is : "<<weight<<endl;
        cout<<"\n\n";
       
    }
};

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    Person *p=new Person[n];
    
    cout<<"\n\nThe details of the people in reverse order is : \n\n";
    delete[] p;

    return 0;
}