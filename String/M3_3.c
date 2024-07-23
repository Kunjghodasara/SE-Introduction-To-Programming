#include<stdio.h>
#include<string.h>
main()
{
	char str[50];
	int i, length;
	
	printf("\n\n\t Enter a String : ");
	gets(str);
	
	length = strlen(str);
	printf("\n\n\t separate individual characters from a string in reverse order : \n\t");
	for(i=length-1; i>=0; i--)
	{
		printf(" %c",str[i]);
	}
}

