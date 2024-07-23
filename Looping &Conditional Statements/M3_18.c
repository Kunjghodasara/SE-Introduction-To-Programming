#include<stdio.h>
main()
{
	int n, i;
	
	printf("\n\n\t enter a number to get table of it : ");
	scanf("%d",&n);
	
	i=1;
	while(i<=10)
	{
		printf("\n\n\t %d * %d = %d ",n,i,(n*i));
		i++;
	}
}
