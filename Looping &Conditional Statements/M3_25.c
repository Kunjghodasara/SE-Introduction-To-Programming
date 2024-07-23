#include<stdio.h>
main()
{
	int i, no, sum=0, totalsum=0;
	
	printf("\n\n\t enter a poitive integer : ");
	scanf("%d",&no);
	for(i=1; i<=no; i++)
	{
		sum+=i;
		totalsum+=sum;
	}
	printf("\n\n\t number is = %d",no);
	printf("\n\n\t totalsum is = %d",totalsum);
}
	
