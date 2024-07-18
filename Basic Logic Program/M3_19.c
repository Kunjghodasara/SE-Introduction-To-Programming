#include<stdio.h>
main()
{
	int P,R,t,CP;
	
	printf("\n\n\t Enter inital principal balance : ");
	scanf("%d",&P);
	printf("\n\n\t enter interest rate : ");
	scanf("%d",&R);
	printf("\n\n\t enter number of time period in year : ");
	scanf("%d",&t);
	
	CP= (P*(1+R/100)*t)-P;
	printf("\n\n\t compound interest is : %d",CP);
	
}
