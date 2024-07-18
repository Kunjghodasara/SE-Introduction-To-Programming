#include<stdio.h>
main()
{
	int days;
	float approx = 30.44, months;
	
	printf("\n\n\t enter the number of days : ");
	scanf("%d",&days);
	
	months = days / approx;
	printf("\n\n\t %d day is approximately in %.2f months :",days,months);
	
}
