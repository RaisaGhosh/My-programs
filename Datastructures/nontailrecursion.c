#include <stdio.h>

void nts(int n){
    if(n>0)
    {
        nts(n-1);
        printf("Hi\n");
        nts(n-2);
    }
}

int main(){
    nts(3);
    return 0;
}