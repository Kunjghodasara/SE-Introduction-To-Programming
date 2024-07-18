#include<stdio.h>
main()
{
	int years, days, months;
	
	printf("\n\n\t enter number of years : ");
	scanf("%d",&years);
	
	days = years * 365;
	months = years * 12;
	
	printf("\n\n\t %d years has %d days ",years,days);
	printf("\n\n\t %d years has %d months ",years,months);
	
}
