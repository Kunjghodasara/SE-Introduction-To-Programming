#include<stdio.h>
main()
{
	int no, rev=0, rem;
	
	printf("\n\n\t enter num = ");
	scanf("%d",&no);
	
	for(; no!=0; no/=10);
	{
		rem=no%10;
		rev = rev * 10 + rem;
	}
	printf("\n\n\t reverse num = %d",rev);
}
