#include<stdio.h>
main()
{
	int r, c, no;
	
	no=1;
	for(r=1; r<=5; r++)
    {
    	for(c=1; c<=10; c++)
    	{
    		printf("%.2d ",no);
    		no++;
		}
		printf("\n");
	}
}
