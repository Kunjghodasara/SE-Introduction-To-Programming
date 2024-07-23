#include<stdio.h>
main()
{
	float height;
	
	printf("\n\n\t enter person's height in CM : ");
	scanf("%f",&height);
	
	if(height<162.5)
	{
		printf("\n\n\t Person is Very Short");
	}
	else if(height<170)
	{
		printf("\n\n\t Person is Short");
	}
	else if(height<180)
	{
		printf("\n\n\t Person's height is average");
	}
	else if(height<190.5)
	{
		printf("\n\n\t Person is tall");
	}
	else 
	{
		printf("\n\n\t person is very tall ");
	}
}

