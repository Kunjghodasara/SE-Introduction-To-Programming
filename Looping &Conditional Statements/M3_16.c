#include<stdio.h>
main()
{
	int sum=0,i,n;
	printf("\n\n\t enter of natural number = ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("\n\n\t sum of numbers is =%d",sum);
	
}
