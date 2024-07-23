#include<stdio.h>
main()
{
	int n[5],i;
	
	printf("\n\n\t enter 5 numbers : ");
	for(i=0; i<5; i++)
	{
		printf("\n\n\t number %d : ",i+1);
		scanf("%d",&n[i]);
	}
	printf("\n\n\t reverse numbers : ");
	for(i=4; i>=0; i--)
		printf("\n\n\t %d",n[i]);

}

