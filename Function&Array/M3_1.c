#include<stdio.h>

int max_num(int arr[], int size)
{
	int max = arr[0];
	int i;
	
	for(i=1; i<size; i++)
	{
		if(arr[i]>max)
			max = arr[i];
	}
	return max;
}
main()
{
	
	int n, i;
	int max;
	printf("\n\n\t enter number of element in arry : ");
	scanf("%d",&n);
	
	
	int arr[n];
	printf("\n\n\t enter %d elements of the arry : \n\t ",n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	max = max_num(arr, n);
	
	printf("\n\n\t the maximum number in the array is : %d",max);
	
}
