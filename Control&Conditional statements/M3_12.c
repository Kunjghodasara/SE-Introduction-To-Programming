#include<stdio.h>
main()
{
	int num1, num2, num3, max;
	
	
	printf("\n\n\t enter number1 value : ");
	scanf("%d",&num1);
	 
	 
	printf("\n\n\t enter number2 value : ");
	scanf("%d",&num2);
	
	
	printf("\n\n\t enter number3 value : ");
	scanf("%d",&num3);
	
	max = (num1 > num2)?
				((num1 > num3)? num1 :num3):
				((num2 > num3)? num2 :num3);
				
	printf("\n\n\t maximum number is %d",max);	
	
}
