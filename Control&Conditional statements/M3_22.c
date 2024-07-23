#include<stdio.h>
main()
{
	long int sal, newsal;
	float hra, da;
	
	
	printf("\n\n\t employee old salary ; ");
	scanf("%d",&sal);
	
	if(sal<=10000)
	{
		hra = 0.20;
		da = 0.80;
	}
	else if(sal<=20000)
	{
		hra = 0.25;
		da = 0.90;
	}
	else
	{
		hra = 0.30;
		da = 0.95;
	}
	newsal = sal + hra + da;
	printf("\n\n\t incremented salary of employee is : %d",newsal);
}
