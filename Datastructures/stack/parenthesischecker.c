#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top=-1,max=20;
char arr[20];

void push(int n){
    if(top==(max-1)){
        printf("\nStack Overflow\n");
        return;
    }
    else
    {
        top++;
        arr[top]=n;

    }
}

int pop(){
    int a;
    if(top==-1){
        printf("\nStack underflow\n");
        return 0;
    }
    else
    {
        a=arr[top];
        top--;
        return a;
    }
}

void display(){
    if(top==-1){
        printf("\nNo element in stack to display\n");
        return;
    }
    int i;
    printf("\nArray elements are : ");
    for(i=0;i<=top;i++){
        printf("%c ",arr[i]);
    }
}

int check(char c){
    if((c==')'&& arr[top]=='(')|| (c=='}'&& arr[top]=='{') || (c==']'&& arr[top]=='[')){
     pop();
     return 1;
    }
    else{
        printf("Invalid Expression\n");
        return 0;
    }

    
}

int main(){
   char a[100];
   int i,n=1,s;
   printf("Enter expression to be checked for validity\n");
   gets(a);
   s=strlen(a);
   for(i=0;i<s;i++){
       if(a[i]=='(' || a[i]=='{' || a[i]=='['){
         push(a[i]);
        //  printf("%cHIII\n",a[i]);
   }
       else if(a[i]==')' || a[i]=='}' || a[i]==']'){
           n=check(a[i]);
           if(n==0)
           break;
       }
   }
    if(n!=0 && top==-1){
        printf("Valid Expression");
    }

    return 0;
}