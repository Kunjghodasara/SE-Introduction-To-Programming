#include<stdio.h>
main()
{
	int m, n;
	
	printf("\n\n\t enetr the value of m : ");
	scanf("%d",&m);
	
	if(m>0)
	{
		n=1;
		printf("\n\n\t value of n is %d ",n);
	}
	else if(m==0)
	{
		n=0;
		printf("\n\n\t value of n is %d",n);
	}
	else{
		n=-1;
		printf("\n\n\t value of n is %d",n);
	}
}
