#include<stdio.h>
main()
{
	int num, rem, max=0;
	
	printf("\n\n\t enter any 5 to 6 digit num = ");
	scanf("%d",&num);
	
	while(num!=0)
	{
		rem=num%10;
		if(rem>max)
		{
			max = rem;
		}
		num = num / 10;
	}
	printf("\n\n\t max digit is = %d",max);
}

