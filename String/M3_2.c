#include<stdio.h>
#include<string.h>
main()
{
	char str[50];
	int i, count=0;
	
	printf("\n\n\t Enter a String : ");
	gets(str);
	
	printf("\n\n\t separate individual characters from a string : ");
	for(i=0; str[i]!='\0'; i++)
	{
		printf("\n\n\t %c",str[i]);
	}
}

