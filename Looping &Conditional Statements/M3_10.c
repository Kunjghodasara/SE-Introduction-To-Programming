#include<stdio.h>
main()
{
	int i, num, rem, fdigit, ldigit, sum=0;
	
	printf("\n\n\t enter any 5 to 6 digit num = ");
	scanf("%d",&num);
	
	ldigit = num % 10;
	
	fdigit = num;
	while(fdigit>=10)
	{
		fdigit /= 10;
	}
	sum = fdigit + ldigit;
	
	printf("\n\n\t sum is = %d",sum);
}
