#include<stdio.h>
main()
{
	int i, j, A[4][4], B[4][4], c[4][4];
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Enter value of A[%d][%d] : ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("\n");
	printf("\n");
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Enter value of B[%d][%d] : ",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	
	printf("\n");
	printf("\n");
	
	printf("A[4][4] = \n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf(" %d",A[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("B[4][4] = \n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf(" %d",B[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\n");
	
	printf("A[4][4] + B[4][4] = \n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf(" %.2d",A[i][j] + B[i][j]);
		}
		printf("\n");
	}
	
}

