#include<stdio.h>

struct Employee
{
	int empno;
	char empname[50];
	char empaddr[100];
	int empage;
}e[5];

main()
{
	int i;
	for(i=0; i<5; i++)
	{
		printf("\n\t Enter details for Employee %d\n", i + 1);
		
		printf("\t Enter Employee Number : ");
		scanf("%d",&e[i].empno);
	
		printf("\n\t Enter Employee Name : ");
		scanf(" %s",&e[i].empname);
	
		printf("\n\t Enter Employee Address : ");
		scanf(" %s",&e[i].empaddr);
	
		printf("\n\t Enter Employee Age : ");
		scanf("%d",&e[i].empage);
	
		printf("\n\t Emplyee Number : %d",e[i].empno);
		printf("\n\t Emplyee Name : %s",e[i].empname);
		printf("\n\t Emplyee Address : %s",e[i].empaddr);
		printf("\n\t Emplyee Age : %d",e[i].empage);
		
	}
}

