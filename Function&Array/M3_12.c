#include<stdio.h>
main()
{
	int i;
	char name[5][10];
	
	printf("\n\n\t enter name : ");
	for(i=0; i<5; i++)
	{
		printf("\n\n\t enter %d name : ",i+1);
		scanf(" %s",&name[i]);
	}
	
	printf("\n\t print the names : ");
	for(i=0; i<5; i++)
	{
		printf("\n\n\t Name of %d : %s",i+1,name[i]);
	}
}

