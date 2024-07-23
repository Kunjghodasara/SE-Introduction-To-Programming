#include<stdio.h>
#include<string.h>

int countOccurrences(char *str, char *word){
	int count=0;
	char *pos = str; 	
	
	while((pos = strstr(pos, word)) != NULL){
		count++;
		pos += strlen(word);
	}
	return count;
}

main()
{
	char str[100];
	char word[] = "is";
	
	printf("\n\n\t Enter A String : ");
	gets(str);
	
	int occurences = countOccurrences(str, word);
	printf("\n\n\t The word '%s' appers %d times in a string : ",word,occurences);
}

