#include<stdio.h>
main()
{
		int num1, num2, num3, largest;
	
	
	printf("\n\n\t enter number1 value : ");
	scanf("%d",&num1);
	 
	 
	printf("\n\n\t enter number2 value : ");
	scanf("%d",&num2);
	
	
	printf("\n\n\t enter number3 value : ");
	scanf("%d",&num3);
	
	if(num1>num2 && num1>num3)
	       largest = num1;
	else if(num2>num3 && num2>num1)
			largest = num2;       
    else
    		largest = num3;
    printf("\n\n\t the largedt number is %d ",largest);		

}

