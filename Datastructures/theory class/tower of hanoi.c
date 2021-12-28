#include <stdio.h>
#include <stdlib.h>

void towerofhanoi(int n,char s,char a,char d){
    if(n==1)
    printf("%c->%c\n",s,d);
    else{
        towerofhanoi(n-1,s,d,a);
        printf("%c->%c\n",s,d);
        towerofhanoi(n-1,a,s,d);
    }
}

int main(){
    int n;
    printf("Enter a value : ");
    scanf("%d",&n);
    towerofhanoi(n,'S','A','D');

    return 0;
}