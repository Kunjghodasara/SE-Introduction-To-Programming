#include<stdio.h>
main()
{
	int n[5], i, j, temp;
	
	printf("\t enter 5 numbers : ");
	for(i=0; i<5; i++)
	{
		printf("\n\t enter %d number : ",i+1);
		scanf("%d",&n[i]);
	}
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5-i-1; j++)
		{
			if(n[j]>n[j+1])
			{
				temp = n[j];
				n[j] = n[j+1];
				n[j+1] = temp;
			}
		}
	}
	printf("\n\t sort in ascending order : ");
	for(i=0; i<5; i++)
	{
		printf(" %d",n[i]);
	}
}

