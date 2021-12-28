#include <iostream>
#include <string.h>
using namespace std;

class Book{
    int BOOK_NO;
    char BOOK_TITLE[20],BOOK_Authors[50];
    float PRICE;
    void TOTAL_COST(int n){
        cout<<"Total cost of "<<n<<" copies of book is "<<(PRICE*n)<<endl;
    }  
    public:

    Book(int a,char b[],char c[],float d){
        BOOK_NO=a;
        strcpy(BOOK_TITLE,b);
        strcpy(BOOK_Authors,c);
        PRICE=d;
    }
    void DISPLAY(){
        cout<<"Book No.is "<<BOOK_NO<<"\n";
        cout<<"Book Title is "<<BOOK_TITLE<<"\n";
        cout<<"Book Author is "<<BOOK_Authors<<"\n";
        cout<<"Price per unit of the book is "<<PRICE<<"\n\n";
    }

    void PURCHASE(){
        int n;
        cout<<"Enter how many copies of book you want to buy\n";
        cin>>n;
        TOTAL_COST(n);
    }

    ~Book(){
        cout<<"\n\nThis object scope ends here\n";
    }
};

int main(){
    int i;
    int a;
    char b[20],c[50];
    float d;
    for(i=0;i<2;i++){
        cout<<"\n\nEnter book number,book title,book author and price per unit of book \n";
        cin>>a;
        fflush(stdin);
        gets(b);
        fflush(stdin);
        gets(c);
        cin>>d;
        Book B1(a,b,c,d);
        B1.DISPLAY();
        B1.PURCHASE();
    }
    return 0;
}
