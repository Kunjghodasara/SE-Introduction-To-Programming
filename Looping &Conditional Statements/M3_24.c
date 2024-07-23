#include<stdio.h>
main()
{
	int i, no, sum=0, mul;
	
	printf("\n\n\t enter a positive integer : ");
	scanf("%d",&no);
	for(i=1; i<=no; i++)
	{ 
		sum+=i;
		mul+=i*i;
	}
	printf("\n\n\t no is = %d",no);
	printf("\n\n\t sum is = %d",sum);
	printf("\n\n\t mul is = %d",mul);
}
