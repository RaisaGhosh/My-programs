#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

////////wrong code

int top=-1,max=100;
int stack[100];

void push(int n){
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

int pop(){
    int a;
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

int eval(char c){
    int x,y;
    x=pop();
    y=pop();
    // printf("fffff%dttttt%d",x,y);
    if(c=='+'){
        // printf("aaaaaa%d\n",x+y);
        return (y+x);
        
    }
    if(c=='-'){
        // printf("bbbbbbbb%d\n",y-x);
        return (y-x);
        
    }
    if(c=='*'){
        // printf("cccccccc%d\n",y*x);
        return (y*x);
        
    }
    if(c=='/'){
        // printf("dddddddd%d\n",y/x);
        return (y/x);
        
    }
    if(c=='%'){
        // printf("eeeeeeee%d\n",y%x);
        return (y%x);
        
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
        printf("%d ",stack[i]);
    }
}


int main(){
    int i,s,res,x,m=1;
    char e[100];
    printf("Enter the expression\n");
    gets(e);
    s=strlen(e);
   
    for(i=0;i<s;i++){
        if(e[i]=='+' || e[i]=='-' || e[i]=='*' || e[i]=='/' || e[i]=='%'){
            // printf("yyyyyyyyyyy%c\n",e[i]);
            res=eval(e[i]);   
            // printf("xxxxxxx%d\n",res);
            push(res);
        }
        else
           { if(e[i]==' '&& (e[i-1]=='+' || e[i-1]!='-' || e[i-1]!='*' || e[i-1]!='/' || e[i-1]!='%')){
               push(x);
               m=1;
           }
            else{
                x=((int)(e[i])-'0')*m;
                m=m*10;
            }
               
           }

        display();
            
    }  

    printf("\n\nThe evaluated value is : %d",stack[0]);
    return 0;
}