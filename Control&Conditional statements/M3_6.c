#include<stdio.h>
main()
{
	int ch;
	
	printf("\n\n\t enetr any character : ");
	scanf("%c",&ch);
	
	if(ch == 'a' || ch == 'A')
	{
		printf("\n\n\t %c is vowel ",ch);
	}
	else if(ch == 'e' || ch == 'E')
	{
		printf("\n\n\t %c is a vowel ",ch);
	}
	else if(ch == 'i' || ch == 'I')
	{
		printf("\n\n\t %c is a vowel ",ch);
	}
	else if(ch == 'o' || ch == 'O')
	{
		printf("\n\n\t %c is a vowel ",ch);
	}
	else if(ch == 'u' || ch == 'U')
	{
		printf("\n\n\t %c is a vowel ",ch);
	}
	else
	{
		printf("\n\n\t %c is consonant ",ch);
	}
}
