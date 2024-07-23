#include<stdio.h>
main()
{
	int i, n;
	printf("\n\n\t enter number to get table : ");
	scanf("%d",&n);
	
	for (i=1;i<=10;i++)
	{
		printf("\n\n\t %d * %d \n",n,i,(n*i));
	}
}
