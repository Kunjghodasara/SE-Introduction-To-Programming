#include<stdio.h>

int strlen(char *str)
{
	int length = 0;
	while(str[length]!='\0')
	{
		length++;
	}
	return length;
}

main()
{
	
	char str[100];
	
	printf("\n\n\t enter a string : ");
	gets(str);
	
	int length = strlen(str);
	printf("\n\n\t length of given string is : %d",length);
}
