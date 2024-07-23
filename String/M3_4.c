#include<stdio.h>
#include<string.h>

int countWords(char *str);

main()
{
	char str[100];
	
	printf("\n\n\t Enter a String : ");
	gets(str);
	
	int wordcount = countWords(str);
	
	printf("\n\n\t Total number of words : %d",wordcount);
}

int countWords(char *str)
{
	int word = 0;
	int wordcount = 0;
	
	while(*str)
	{
		if(*str==' ')
			word = 0;
		else if(word == 0)
		{
			word = 1;
			wordcount++;
		}
		str++;
	}
	return wordcount;
}

