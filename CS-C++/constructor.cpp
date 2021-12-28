#include <iostream>
using namespace std;

class Cons{
    public: 
        int a;
    Cons(){
        a=5;
    }
};
int main(){
    Cons c;
    cout<< c.a;
}