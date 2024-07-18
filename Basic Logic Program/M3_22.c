#include<stdio.h>
main()
{
	int P,t;
	float R;
	printf("\n\n\t enter inital principal balance :");
	scanf("%d",&P);
	printf("\n\n\t enter interest rate : ");
	scanf("%f",&R);
	printf("\n\n\t enter number of time period in year : ");
	scanf("%d",&t);
	
	int amount;
	printf("\n\n\t amount is : %d",amount);
	
	int CP = amount - P;
	printf("\n\n\t compound interest is : %d",CP);	
}
