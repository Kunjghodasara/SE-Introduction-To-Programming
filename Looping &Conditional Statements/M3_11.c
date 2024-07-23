#include<stdio.h>
main()
{
	int i;
	char name[10];
	
	i = 1;
	while(i<=5)
	{
		printf("\n\n\t enter name : ");
		gets(name);
		printf("\n\n\t %s \n",name);
		i++;
	}
}
