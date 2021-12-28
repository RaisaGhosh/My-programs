#include <iostream>
#include <string.h>
using namespace std;

class Person{
    public:
    char name[100];
    int age;
    int ID;
    char state[200];
    char address[500];

    void input(){
        cout<<"Enter name and age\n";
        gets(name);
        fflush(stdin);
        cin>>age;
    }
    void display(int i,int x){
        i=i+1;
        if(x){
        cout<<"\nName of student "<<i<<" is : "<<name<<"\n";
        cout<<"Age of student "<<i<<" is : "<<age<<"\n";;
        cout<<"ID of student "<<i<<" is : "<<ID<<"\n";
        cout<<"State of Residence of student "<<i<<" is : "<<state<<"\n";
        cout<<"Address of student "<<i<<" is : "<<address<<"\n"<<"\n";
    }
    else{
        cout<<"Name of employee "<<i<<" is : "<<name<<"\n";
        cout<<"Age of employee "<<i<<" is : "<<age<<"\n";;
        cout<<"ID of employee "<<i<<" is : "<<ID<<"\n";
        cout<<"State of Residence of employee "<<i<<" is : "<<state<<"\n";
        cout<<"Address of employee "<<i<<" is : "<<address<<"\n"<<"\n";
    }

  }
};

class Student:public Person{
    public:
    void input(){
        Person::input();
        cout<<"Enter Student ID,State of Residence,Address\n";
        cin>>ID;
        fflush(stdin);
        gets(state);
        fflush(stdin);
        gets(address);
    }
};

class Employee:public Person{
    public:
    void input(){
        Person::input();
        cout<<"Enter Employee ID,State of Residence,Address\n";
        cin>>ID;
        fflush(stdin);
        gets(state);
        fflush(stdin);
        gets(address);
    }
};

int main(){
    Student S[3];
    Employee E[3];
    int i;
    for(i=0;i<3;i++){
        S[i].input();
    }
    for(i=0;i<3;i++){
        S[i].display(i,1);
    }

    for(i=0;i<3;i++){
        E[i].input();
    }
    for(i=0;i<3;i++){
        E[i].display(i,0);
    }

    return 0;
    
}