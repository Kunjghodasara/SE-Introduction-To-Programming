#include<stdio.h>
main()
{
	int n, i, fact=1;
	printf("\n\n\t enter number to get factorial of it = ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		fact = fact * 1;
		i++;
	}
	printf("\n\n\t factorial of %d is %d",n,fact);
	
}
