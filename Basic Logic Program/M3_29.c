#include<stdio.h>
main()
{
	int min, sec;
	float hrs;
	printf("\n\n\t enter minutes : ");
	scanf("%d",&min);
	
	sec  min * 60;
	hrs  min / 60;
	
	printf("\n\n\t in %d minutes %d seconds ",sec,min);
	printf("\n\n\t in %d minutes %.2f hours ",min,hrs);
}
