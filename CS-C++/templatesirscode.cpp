#include <iostream>
using namespace std;

template <class T, class U>
T GetMax (T a, U b) {
  T result;
  result = (a>b)? a : b;
  return (result);
}

int main () {
  char i=65,  k;
  int j=78;
  long l=10, m=5, n;
  k=GetMax(i,j);
  n=GetMax(l,m);
  cout << k << endl;
  cout << n << endl;
  return 0;
}