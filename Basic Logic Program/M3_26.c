#include<stdio.h>
main()
{
	float C, F;
	
	printf("\n\n\t enter temperature in fahrenheit : ");
	scanf("%f",&F);
	
	C = (F - 32)*5/9;
	printf("\n\n\t temperature in celsius is : %.2f",C);
	
}
