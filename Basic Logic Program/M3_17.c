#include<stdio.h>
main()
{
	int sal;
	int premiumRate;
	
	
	printf("\n\n\t Enter person's monthaly salary :");
	scanf("%d",&sal);
	printf("\n\n\t Enter premiumrate : ");
	scanf("%d",&premiumRate);
	printf("\n\n\t person's insurance premium based on salary is : %d%d",(sal*premiumRate)/100);
	
}
