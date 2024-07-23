#include<stdio.h>
main()
{
	int i, n, fact, j;
	
	
	for(i=1; i<=5; i++)
	{
		printf("\n\n\t enter no get factorial : ");
		scanf("%d",&n);
		
		fact = 1;
		for(j=1; j<=n; j++)
		{
			fact*=j;
		}
		printf("\n\n\t factorial is =%d\n",fact);
		
	}
}
