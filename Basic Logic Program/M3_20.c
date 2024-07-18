#include<stdio.h>
main()
{
	float sal, ip, li, rsal;
	
	
	printf("\n\n\t enter user salary : ");
	scanf("%f",&sal);
	
	ip = sal*0.10;
	li = sal*0.10;
	
	rsal = sal-(ip+li);
	
	printf("\n\n\t salary is : %.2f",sal);
	printf("\n\n\t user insurance primum is : %.2f",ip);
	printf("\n\n\t user loan installment is : %.2f",li);
	printf("\n\n\t user has remaining sal is : %.2f",rsal);	
}
