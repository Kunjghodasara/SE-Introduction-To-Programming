#include<stdio.h>
main()
{
	int a, b;
	char choice;
	
	printf("\n\n\t enter value of a : ");
	scanf("%d",&a);
	printf("\n\n\t enter value of b : ");
	scanf("%d",&b);
	
	printf("\n\n\t enter '+' for Addition ");
	printf("\n\n\t enter '-' for Subtraction ");
	printf("\n\n\t enter '*' for Multiplication ");
	printf("\n\n\t enter '/' for Division ");
	printf("\n\n\t enter '%' for Modulo ");
	printf("\n\n\t enet your choice : ");
	scanf("%c",&choice);
	
	if(choice == '+')
	{
		printf("\n\n\t %d + %d is = %d",a,b,(a+b));
	}
	else if(choice == '-')
	{
		printf("\n\n\t %d - %d is = %d",a,b,(a-b));
	}
	else if(choice == '*')
	{
		printf("\n\n\t %d * %d is = %d",a,b,(a*b));
	}
	else if(choice == '/')
	{
		printf("\n\n\t %d / %d is = %d",a,b,(a/b));
	}
	else if(choice == '%')
	{
		printf("\n\n\t %d mod %d is = %d",a,b,(a%b));
	}
	else
	{
		printf("\n\n\t invalid choice...try again......");
	}
}
