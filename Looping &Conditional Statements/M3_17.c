#include<stdio.h>
main()
{
	int n,sum=0,i,odd=0,odd_count=0,even=0,even_count=0;
	i=1;
	while(i<=10)
	{
		printf("\n\n\t enter the enter no : ");
		scanf("%d",&n);
		sum+=n;
		i++;
		if(n%2==0)
		{
			even_count++;
			even+=n;
		}
		else
		{
			odd_count++;
			odd+=n;
		}
		
	}
	printf("\n\n\t sum of number is =%d",sum);
	printf("\n\n\t sum of odd number is =%d",odd);
	printf("\n\n\t sum of even number is =%d",even);
}
