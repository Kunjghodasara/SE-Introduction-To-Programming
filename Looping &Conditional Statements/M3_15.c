#include<stdio.h>
main()
{
	int n, sum=0,i;
	 
	 i=1;
	 while(i<=10)
	 {
	 	printf("\n\n\t enter no : ");
	 	scanf("%d",&n);
	 	sum+=n;
	 	i++;
	 }
	 printf("\n\n\t sum of number is = %d",sum);
	 
}
