#include<stdio.h>
main()
{
	int i,num,odd=0,odd_sum=0,even=0,even_sum=0;

	i=1;
	while(i<=10)
	{
		printf("\n\n\t Enter Num :- ");
		scanf("%d",&num);
		printf("\n\n\t Num is = %d\n",num);
		i++;
		
		if(num%2==0)
		{
			even++;
			even_sum = 	even_sum + num;
		}
		else
		{
			odd++;
			odd_sum = odd_sum + num;	
		}	
	}
	printf("\n\n\t Tere are %d Even numbers ",even);	
	printf("\n\n\t Tere are %d Odd numbers ",odd);
	printf("\n\n\t Sum of Even numbers is :- %d",even_sum);
	printf("\n\n\t Sum of Odd numbers is :- %d",odd_sum);
}
