#include<stdio.h>
main()
{
	int a=3, c=3;
	int m1[a][c];  
	int i, j;
	
	for(i=0; i<a; i++)
	{
		for(j=0; j<c; j++)
		{
			printf(" %d",m1[i][j]);	
		}	
		printf("\n");
	} 
}

