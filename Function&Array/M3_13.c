#include<stdio.h>
main()
{
	int n[5], i, even, odd;
	
	printf("\n\n\t enter 5 numbers : ");
	for(i=0; i<5; i++)
	{
		printf("\n\n\t enter number %d : ",i+1);
		scanf("%d",&n[i]);
	}
	
	printf("\n\n\t check even or odd and print : ");
	for(i=0; i<5; i++)
	{
		if(n[i]%2==0)
			printf("\n\n\t %d number is even :",n[i]);
		else
			printf("\n\n\t %d number is odd :",n[i]);
	}
}

