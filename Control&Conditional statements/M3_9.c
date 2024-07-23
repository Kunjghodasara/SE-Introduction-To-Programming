#include<stdio.h>
main()
{
	char ch;
	
	printf("\n\n\t enetr any character : ");
	scanf("%c",&ch);
	int asc = ch;
	
	if(asc >=65 && asc <=90)
	{
		printf("\n\n\t uppercase latter ");
	}
	else if(asc >=97 && asc <= 122)
	{
		printf("\n\n\t lowercase latter ");
	}
	else if(asc >=48 && asc <= 57)
	{
		printf("\n\n\t digits ");
	}
	else
	{
	}
	
}
