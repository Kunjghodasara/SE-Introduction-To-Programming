#include<stdio.h>
main()
{
	int i, num, rem;
	
	
	printf("\n\n\t enter num to about 5 to 6 digit to rev it : ");
	scanf("%d",&num);
	printf("\n\n\t reverse num is = ");
	
	while(num>0)
	{
		rem = num%10;
		printf("\n\n\t %d",rem);
		num/=10;
	}

}
