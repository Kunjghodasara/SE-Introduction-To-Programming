#include<stdio.h>
main()
{
	int i, a=0, b=1, sum, n;
	
	printf("\n\n\t enter no to get fibonacci series = ");
	scanf("%d",&n);
	
	printf("\n\n\t %d %d",a,b);
	for (i=1;i<=n; i++)
	{
		sum = a + b;
		printf("\n\n\t %d",sum);
		a = b;
		b = sum;
		sum = a;
	}
}
