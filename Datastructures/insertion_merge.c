//took help
#include <stdio.h>

void display(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void insertionsort(int a[],int n){
    int i,m,j;
    for(i=0;i<n;i++){
        m=a[i];
        for(j=i-1;j>=0;j--){
            if(m<a[j]){
                a[j+1]=a[j];
            }
            if(m>a[j])
            break;
        }
        a[j+1]=m;
    }
    display(a,n);
}


void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[n1], R[n2];

	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	
	i = 0; 
	j = 0; 
	k = l; 
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}



void mergeSort(int arr[], int l, int r)
{
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}


int main(){
    int a[10],i,c;
    printf("Enter the 10 elements of the array\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Press 1 to sort array using insertion sort\nPress 2 to sort array using Merge sort\n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:insertionsort(a,10);
            break;

    case 2:mergeSort(a,0,9);
            display(a,10);
           break;
    
    default:printf("Invalid sorting choice");

    }
	return 0;
    
}