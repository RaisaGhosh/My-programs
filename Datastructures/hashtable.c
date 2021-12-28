#include <stdio.h>

typedef struct ht{
    int value;
    int key;
}ht;

void display(ht a[]){
    int i;
    printf("Value\tArray cell number\n");
    for(i=0;i<10;i++){
        printf("%d\t%d\n",a[i].value,a[i].key+1);
    }
}

int main(){
    ht hashtable[10];
    int a,i;
    printf("Enter 10 numbers(make sure last digit doesn't repeat)\n");
    for(i=0;i<10;i++){
        scanf("%d",&a);
        hashtable[a%10].value=a;
        hashtable[a%10].key=a%10;
    }
    display(hashtable);

    printf("Enter element to be searched : ");
    scanf("%d",&a);
    if(hashtable[a%10].value==a)
    printf("Element present in array cell : %d\n",a%10+1);
    else
    printf("Element not present\n");

    return 0;
}