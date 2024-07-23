#include<stdio.h>
main()
{
	
	int temp;
	
	printf("\t Enter Temperature : ");
	scanf("%d",&temp);
	
	if(temp < 0)
	{
		printf("\t Freezing weather ");
	}
	else if(temp >= 0 && temp < 10)
	{
		printf("\t Very Cold weather ");
	}
	else if(temp >= 10 && temp < 20)
	{
		printf("\t Cold weather ");
	}
	else if(temp >= 20 && temp < 30)
	{
		printf("\t Normal in Temp ");
	}
	else if(temp >= 30 && temp < 40)
	{
		printf("\t Its Hot ");
	}
	else if(temp >= 40)
	{
		printf("\t Its Very Hot ");
	}
}

