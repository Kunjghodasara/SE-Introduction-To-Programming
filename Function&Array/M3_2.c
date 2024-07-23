#include<stdio.h>

int add()
{
	int num1, num2;
	printf("\n\n\t enter number 1 value : ");
	scanf("%d",&num1);
	printf("\n\n\t enter number 2 value : ");
	scanf("%d",&num2);
	
	printf("\n\n\t result is : %d \n\n\t ", num1 + num2);
}

int sub()
{
	int num1, num2;
	printf("\n\n\t enter number 1 value : ");
	scanf("%d",&num1);
	printf("\n\n\t enter number 2 value : ");
	scanf("%d",&num2);
	
	printf("\n\n\t result is : %d \n\n\t ", num1 - num2);
}

int mul()
{
	int num1, num2;
	printf("\n\n\t enter number 1 value : ");
	scanf("%d",&num1);
	printf("\n\n\t enter number 2 value : ");
	scanf("%d",&num2);
	
	printf("\n\n\t result is : %d \n\n\t ", num1 * num2);
}

int div()
{
	int num1, num2;
	printf("\n\n\t enter number 1 value : ");
	scanf("%d",&num1);
	printf("\n\n\t enter number 2 value : ");
	scanf("%d",&num2);
	
	if(num2!=0)
		printf("\n\n\t result is : %d \n\n\t ", num1 / num2);
	
	else
		printf("\n\n\t division by zero is zero");
}

main()

{
	int choice;
	
	do{
		printf("\n\t List Of Menu : ");
		printf("\n\t 1. Addition ");
		printf("\n\t 2. Substraction");
		printf("\n\t 3. Multiplication");
		printf("\n\t 4. Division");
		printf("\n\t 5. Exit");
		printf("\n\t Enter your Choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: add();
					break;
					
			case 2: sub();
					break;
					
			case 3: mul();
					break;
					
			case 4: div();
					break;
					
			case 5: printf("\t Exiting....");
					break;
			
			default:
					printf("\t Invalid Choice ......");
		}
	}while(choice!=5);

		
	
}
