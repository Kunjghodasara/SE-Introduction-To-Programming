#include<stdio.h>
main()
{
	int i, no, rem, rev, ono;
	i=1;
	while(i<=1)
	{
		printf("\n\n\t enter number : ");
		scanf("%d",&no);
		
		ono = no;
		rev = 0;
		
		while(no!=0)
		{
			rem = no%10;
			rev = rev * 10 + rem;
			no /= 10;
		}
		if(ono == rev)
			printf("\n\n\t palidrome number ");
		else
		    printf("\n\n\t not palidrome number ");
		i++;		
	}
}
