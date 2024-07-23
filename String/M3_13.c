#include<stdio.h>
#include<string.h>
void removeChar(char *str)
{
	int i, j=0;
	for(i=0; str[i]!='\0'; i++)
	{
		if(isalpha(str[i])){
			str[j++] = str[i];
		}
	}
	str[j] = '\0';
}
main()
{
	char str[100];
	
	printf("\n\n\t Enter a String : ");
	gets(str);
	
	if(str[strlen(str)-1] == '\n'){
		str[strlen(str)-1] = '\0';
	}
	
	removeChar(str);
	
	printf("\n\n\t String after removing non-alphabet characters: %s", str);

}

