#include<stdio.h>
main()
{
	int a1, a2, a3, sum;
	
	
	printf("\n\n\t enter value of angle1 : ");
	scanf("%d",&a1);
	
	
	printf("\n\n\t enter value of angle2 : ");
	scanf("%d",&a2);
	
	
	printf("\n\n\t enter value of angle3 : ");
	scanf("%d",&a3);
	
	sum = a1 + a2 + a3;
	
	
	if(sum == 180)
	{
		printf("\n\n\t triangle is formed ");
	}
	else
	{
		printf("\n\n\t triangle is not formed");
	}
}
