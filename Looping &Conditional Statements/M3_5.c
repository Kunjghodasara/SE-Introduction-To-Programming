#include<stdio.h>
main()
{
	int i, n, fact=1;
	
	printf("\n\n\t enter num to git factorial of it : ");
	scanf("%d",&n);
	
	if(n==0)
	{
		printf("\n\n\t give positive num ");
	}
	else
	{
		for(i=1; i<=n; i++)
		{
			fact*=i;
		}
		printf("\n\n\t factorial of %d num is = %d",n,fact);
	}
}
