#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top=-1,max=100,x=0;
char stack[100],a[100];

void push(char n){
    if(top==(max-1)){
        printf("\nStack Overflow\n");
        return;
    }
    else
    {
        top++;
        stack[top]=n;

    }
}

char pop(){
    char a;
    if(top==-1){
        printf("\nStack underflow\n");
        return 0;
    }
    else
    {
        a=stack[top];
        top--;
        return a;
    }
}

void add_sub(char c){
    char n;
    while(stack[top]=='*' || stack[top]=='/' || stack[top]=='%' || stack[top]== '+' || stack[top]== '-'){
        n=pop();
        a[x++]=n;
    }
    push(c);
}

void mul_div(char c){
     char n;
     while(stack[top]=='*' || stack[top]=='/' || stack[top]=='%'){
        n=pop();
        a[x++]=n;
    }
    push(c);
}

void brace(char c){
    char q;
    if(c=='('|| c=='{' || c=='['){
        push(c);
        return;
    }
    if(c==')'){
        q=pop();
        while(q!='('){
            a[x++]=q;
            q=pop();
        }
         
    }
    if(c=='}'){
       q=pop();
        while(q!='('){
            a[x++]=q;
            q=pop();
        }
    }
    if(c==']'){
        q=pop();
        while(q!='('){
            a[x++]=q;
            q=pop();
        }
    }
}

void display(){
    if(top==-1){
        printf("\nNo element in stack to display\n");
        return;
    }
    int i;
    printf("\nStack elements are : ");
    for(i=0;i<=top;i++){
        printf("%c ",stack[i]);
    }
}

void display1(){
    int i;
    printf("\nArray elements are : ");
    for(i=0;i<strlen(a);i++){
        printf("%c ",a[i]);
    }
}

int main(){
    int i,s;
    char e[100];
    printf("Enter the expression\n");
    gets(e);
    s=strlen(e);
   
    for(i=0;i<s;i++){
        if(e[i]== '+' || e[i]== '-'){
        add_sub(e[i]);
        // printf("aaaaaaaa\n");
        }
        else if(e[i]=='*' || e[i]=='/' || e[i]=='%' || e[i]=='+' || e[i]=='-'){
                mul_div(e[i]);
                // printf("bbbbbbbbb\n");
        }
             else if(e[i]=='(' || e[i]=='{' || e[i]=='[' ||e[i]==')' || e[i]=='}' || e[i]==']' ){
                    brace(e[i]);
                    // printf("ccccccccc\n");
             }
                  else{
                    a[x++]=e[i];
                    // printf("ddddddddd\n");
                  }
            // display();
            // display1();
    }

    printf("\n");
    printf("\n\nPostfix expression is : ");
    for(i=0;i<s;i++){
        printf("%c",a[i]);
    }
    while(top!=-1){
        printf("%c",pop());
    }    
    printf("\n");
    return 0;
}