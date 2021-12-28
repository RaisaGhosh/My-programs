#include <iostream>
#include <string.h>
using namespace std;

class Student{
    public:
    char name[100];
    int age;
    double id,cls;
    Student(){
        char n[100];
        int a;
        double i,c;
        cout<<"Enter name, age, ID and class of student : "<<endl;
        fflush(stdin);
        gets(n);
        fflush(stdin);
        cin>>a>>i>>c;
        strcpy(name,n);
        age=a;
        id=i;
        cls=c;
        cout<<"\n";
    }
    void display(){
        cout<<"Name of the student is : "<<name<<endl;
        cout<<"Age of the student is : "<<age<<endl;
        cout<<"ID of the student is : "<<id<<endl;
        cout<<"Class of the student is : "<<cls<<endl;
        cout<<"\n\n";
       
    }
};

int main(){
    int n,i;
    cout<<"Enter the value of n : ";
    cin>>n;
    Student *p=new Student[n];
    
    cout<<"\n\nThe details of the students are : \n\n";

    for(i=0;i<n;i++){
        p[i].display();
    }

    delete[] p;

    return 0;
}