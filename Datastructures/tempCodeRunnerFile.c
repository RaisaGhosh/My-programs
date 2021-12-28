#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    int exp;
    struct node *l;
}node;

node *pol1=NULL,*pol2=NULL,*poladd=NULL,*polmul=NULL;

void addnode1(int a,int b){
    node *link = NULL,*x;
    link=(node*)malloc(sizeof(node));
    link->val=a;
    link->exp=b;
    link->l=NULL;
    if(pol1==NULL){
        pol1=link;
    }
    else{
     x=pol1;
     while(x->l!=NULL){
        x=x->l;
     }
    }
    x->l=link;
}

void addnode2(int a,int b){
    node *link = NULL,*x;
    link=(node*)malloc(sizeof(node));
    link->val=a;
    link->exp=b;
    link->l=NULL;
    if(pol2==NULL){
        pol2=link;
    }
    else{
     x=pol2;
     while(x->l!=NULL){
        x=x->l;
     }
    }
    x->l=link;
}

void addnode3(int a,int b){
    node *link = NULL,*x;
    link=(node*)malloc(sizeof(node));
    link->val=a;
    link->exp=b;
    link->l=NULL;
    if(poladd==NULL){
        poladd=link;
    }
    else{
     x=poladd;
     while(x->l!=NULL){
        x=x->l;
     }
    }
    x->l=link;
}

void addnode4(int a,int b){
    node *link = NULL,*x;
    link=(node*)malloc(sizeof(node));
    link->val=a;
    link->exp=b;
    link->l=NULL;
    if(polmul==NULL){
        polmul=link;
    }
    else{
     x=polmul;
     while(x->l!=NULL){
        x=x->l;
     }
    }
    x->l=link;
}


void polynomialadd(){
  node *x,*y;
  x=pol1;
  y=pol2;
  while(x->l!=NULL && y->l!=NULL){
  if(x->exp==y->exp){
      addnode3(x->val+y->val,x->exp);
      x=x->l;
      y=y->l;
  }
  else{
      if(x->exp>y->exp){
        addnode3(x->val,x->exp);
        x=x->l;
      }
      else{
        addnode3(y->val,y->exp);
        y=y->l;
      }
  }

  }
    
}

void display1(){
    node *n;
    n=pol1;
    while(n->l!=NULL){
        printf("%d.x^%d+",n->val,n->exp);
        n=n->l;
    }
    printf("%d.x^%d",n->val,n->exp);
}

void display2(){
    node *n;
    n=pol2;
    while(n->l!=NULL){
        printf("%d.x^%d+",n->val,n->exp);
        n=n->l;
    }
    printf("%d.x^%d",n->val,n->exp);
}

void display3(){
    node *n;
    n=poladd;
    while(n->l!=NULL){
        printf("%d.x^%d+",n->val,n->exp);
        n=n->l;
    }
    printf("%d.x^%d",n->val,n->exp);
}

void display4(){
    node *n;
    n=polmul;
    while(n->l!=NULL){
        printf("%d.x^%d+",n->val,n->exp);
        n=n->l;
    }
    printf("%d.x^%d",n->val,n->exp);
}


int main(){
    int n,a,x,c=1;
    printf("How many different powers of x are in the polynomial 1? ");
    scanf("%d",&a);
    while(c<=a){
    printf("\nEnter value and power of first term in polynomial\n");
    scanf("%d",&n);
    scanf("%d",&x);
    addnode1(n,x);
    fflush(stdin);
    c++;
    }
    c=1;
    printf("How many different powers of x are in the polynomial 2? ");
    scanf("%d",&a);
    while(c<=a){
    printf("\nEnter value and power of first term in polynomial\n");
    scanf("%d",&n);
    scanf("%d",&x);
    addnode2(n,x);
    fflush(stdin);
    c++;
    }

    display1();
    display2();
    polynomialadd();
    display3();
    return 0;
}