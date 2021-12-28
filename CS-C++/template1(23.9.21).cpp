#include <iostream>
using namespace std;

template <class T>
void Swap (T *a, T *b) {
  T c;
  c=*a;
  *a=*b;
  *b=c;
}

int main () {
  int a,b;
  cout<<"Enter 2 integers to be swapped"<<endl;
  cin>>a>>b;
  cout<<"Before swapping :"<<endl;
  cout << "a = "<<a << endl;
  cout << "b = "<<b << endl;
  Swap(&a,&b);
  cout<<"After swapping :"<<endl;
  cout << "a = "<<a << endl;
  cout << "b = "<<b << endl;
  return 0;
}