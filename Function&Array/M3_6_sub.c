// 6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
// Substraction

#include<stdio.h>
main()
{
	int i, j, A[2][2], B[2][2], c[2][2];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value of A[%d][%d] : ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("\n");
	printf("\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter value of B[%d][%d] : ",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	
	printf("\n");
	printf("\n");
	
	printf("A[2][2] = \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d",A[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("B[2][2] = \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d",B[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\n");
	
	printf("A[2][2] - B[2][2] = \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %.2d",A[i][j] - B[i][j]);
		}
		printf("\n");
	}
	
}
