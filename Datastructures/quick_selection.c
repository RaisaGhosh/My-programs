//took help
#include <stdio.h>

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}


int partition (int arr[], int low, int high)
{
	int pivot = arr[high]; 
	int i = (low - 1); 

	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

void display(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;
	for (i = 0; i < n-1; i++)
	{
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		swap(&arr[min_idx], &arr[i]);
	}
}

int main(){
    int a[10],i,c;
    printf("Enter the 10 elements of the array\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Press 1 to sort array using quick sort\nPress 2 to sort array using selection sort\n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:quickSort(a,0,9);
            display(a,10);
            break;

    case 2:selectionSort(a,10);
            display(a,10);
           break;
    
    default:printf("Invalid sorting choice");

    }
    
}