#include <iostream>
#include <string.h>
using namespace std;

class Book{
    public:
    int BOOK_NO;
    char BOOK_TITLE[20],BOOK_Authors[50];

    Book(){
        int a;
        char b[20],c[50];
        cout<<"\nEnter book number,book title and book author \n";
        cin>>a;
        fflush(stdin);
        gets(b);
        fflush(stdin);
        gets(c);
        BOOK_NO=a;
        strcpy(BOOK_TITLE,b);
        strcpy(BOOK_Authors,c);
    }

    void DISPLAY(){
        cout<<"\nBook No. "<<BOOK_NO<<" is "<<"\n";
        cout<<"Book Title is "<<BOOK_TITLE<<"\n";
        cout<<"Book Author is "<<BOOK_Authors<<"\n";
    }

};

int main(){
    int i;
    Book B[2];
    for(i=0;i<2;i++){
        B[i].DISPLAY();
    }
    return 0;
}
