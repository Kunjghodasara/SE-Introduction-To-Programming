#include<stdio.h>
main()
{
	int n, sign = 1, i;
	float sum = 0.0;
	
	printf("\n\n\t enter the value of n : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		float term = (float)i /(i+1);
		sum+=sign * term;
		sign=-sign;
	}
	printf("\n\n\t sum of the series for n=%d is %.2f\n",n,sum);
	return 0;
}
