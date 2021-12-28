
//has error correct it
#include <stdio.h>

void display(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}



void merge(int a[],int f,int mid,int l,int n){
    int r[n],i=f,j=mid+1,k=0;
    
    while(i<=mid && j<l){
        if(a[i]<a[j]){
            r[k++]=a[i++];
        }
        else if(a[j]<a[i]){
            r[k++]=a[j++];
        }
    }
    while(i<=mid){
        r[k++]=a[i++];
    }
    while (j<l)
    {
        r[k++]=a[j++];
    }
    
    for(i=0;i<n;i++){
        a[i]=r[i];
    }
}


void mergesort(int a[],int f,int l){
    int mid;
    if(f>=l){
        return;
    }
    else{
        mid=(l+f) / 2;;
        mergesort(a,f,mid);
        mergesort(a,mid,l);
        merge(a,f,mid,l,l-f+1);
    }
}



int main(){
    int a[10],i,c;
    printf("Enter the 10 elements of the array\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    mergeSort(a,0,9);
            display(a,10);
         
    }
    
