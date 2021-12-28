#include <iostream>
using namespace std;

template <class T>
void Swap (T *a, T *b) {
  T c;
  c=*a;
  *a=*b;
  *b=c;
}

template <class T>
void Sort (T a[],int n) {
  int i,j;
  for(i=0;i<n-1;i++){
      for(j=0;j<(n-1)-i;j++){
          if(a[j]>a[j+1]){
              Swap(&a[j],&a[j+1]);
          }
      }
  }
  cout<<"Sorted array is : ";
  for(i=0;i<n;i++){
      cout<<a[i]<< " ";
  }
  cout<<"\n";
}

int main () {
  int n,c,i;
//   cout<<n<<"****\n";
  cout<<"Enter how many elements you want to enter in the array"<<endl;
  cin>>n;
  cout<<"To input & sort an integer array press 1\nTo input & sort an float array press 2\nTo input & sort an character array press 3\n";
  cin>>c;
  switch (c)
  {
  case 1:   int arr[100];
            cout<<"Enter the array elements : ";
            for(i=0;i<n;i++){
                cin>>arr[i];
            }
            Sort(arr,n);
            break;

   case 2:   float arr1[100];
            cout<<"Enter the array elements : ";
            for(i=0;i<n;i++){
                cin>>arr1[i];
            }
            Sort(arr1,n);
            break;

   case 3:   char arr2[100];
            cout<<"Enter the array elements : ";
            for(i=0;i<n;i++){
                cin>>arr2[i];
            }
            Sort(arr2,n);
            break;
  
  default: cout<<"Invalid Input";
  }

  return 0;
}