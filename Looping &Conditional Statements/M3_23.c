#include<stdio.h>
main()
{
	int i, no, sum=0;
	
	
	printf("\n\n\t enter a positive integer : ");
	scanf("%d",&no);
	for(i=1; i<=no; i++)
	{
		sum+=i;
	}
	printf("%d %d",no,sum);
}
