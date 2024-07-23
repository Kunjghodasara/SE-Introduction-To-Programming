#include<stdio.h>
main()
{
	int n[5], i, sum=0;
	
	printf("\t enter 5 numbers : ");
	for(i=0; i<5; i++)
	{
		printf("\n\t enter number %d : ",i+1);
		scanf("%d",&n[i]);
	}
	
	for(i=0; i<5; i++)
	{
		sum+=n[i];
	}
	printf("\n\t sum is : %d",sum);
}

