#include <stdio.h>


int binarySearch(int arr[], int lb, int ub, int x)
{
	while (ub >= lb) {
		int mid = lb + (ub - lb) / 2;

		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			ub=mid-1;
        else
            lb=mid+1;
	}

	return -1;
}

int linearSearch(int arr[], int n, int x)
{   int i;
	for(i=0;i<n;i++){
        if(arr[i]==x)
        return i;
    }
	return -1;
}

int main(){
    int a[10],i,c,n,val;
    printf("Enter the 10 elements of the array\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&n);
    printf("Press 1 to search elements using linear search\nPress 2 to search elements using binary search\n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:val=linearSearch(a,10,n);
            if(val==-1)
                printf("Element is not present in array\n");
            else
                printf("Element is present at index %d\n", val+1);
            break;

    case 2:val=binarySearch(a,0,9,n);
           if(val==-1)
                printf("Element is not present in array\n");
            else
                printf("Element is present at index %d\n", val+1);
           break;
    
    default:printf("Invalid searching choice");

    }
    
}