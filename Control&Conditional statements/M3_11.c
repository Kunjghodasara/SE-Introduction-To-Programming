#include<stdio.h>
main()
{
	int num;
	
	printf("\n\n\t enter number : ");
	scanf("%d",&num);
	
	(num%2 == 0) ? printf("\n\n\t even number ") : printf("\n\n\t odd number");
}
