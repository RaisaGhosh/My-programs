#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top=-1,max=20;
char arr[20];

void push(char n){
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

int peep(){
    return arr[top];
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
    printf("\n");
}

void Bracket(char c){
    char k;
    if(c=='(' || c=='{' || c=='['){
        push(c);
        return;
    }
    if(c==')'){
        while((k=pop())!='('){
            printf("%c",k);
        }
        return;
    }
    if(c=='}'){
        while((k=pop())!='{'){
            printf("%c",k);
        }
        return;
    }
    if(c==']'){
        while((k=pop())!='['){
            printf("%c",k);
        }
        return;
    }
    
    
}

void Multiply(){
    char k=peep();
    while(k=='/' || k=='*'){
            k=pop();
            printf("%c",k);
            k=peep();
        }
    push('*');
}

void Divide(){
    char k=peep();
    while(k=='/' || k=='*'){
            k=pop();
            printf("%c",k);
            k=peep();
        }
    push('/');
}

void Add(){
    char k=peep();
    while(k=='/' || k=='*' || k=='+' || k=='-'){
            k=pop();
            printf("%c",k);
            k=peep();
        }
    push('+');
}

void Subtract(){
    char k=peep();
    while(k=='/' || k=='*' || k=='+' || k=='-'){
            k=pop();
            printf("%c",k);
            k=peep();
        }
    push('-');
}

int main(){
    char a[200];
    int l,i;
    printf("Enter the in-fix expression : ");
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++){
        if(a[i]=='(' || a[i]==')' || a[i]=='{' || a[i]=='}' || a[i]=='[' || a[i]==']' )
            Bracket(a[i]);
        else if(a[i]=='*')
            Multiply();
        else if(a[i]=='/')
            Divide();
        else if(a[i]=='+')
            Add();
        else if(a[i]=='-')
            Subtract();
        else printf("%c",a[i]);
    }
    printf("\n");
    
    return 0;
}