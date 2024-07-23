#include<stdio.h>

struct employee
{
	int empno;
	char empname[50];
	char empaddr[100];
	int empage;
}e;

main()
{
	printf("\t Enter Employee Number : ");
	scanf("%d",&e.empno);
	
	printf("\n\t Enter Employee Name : ");
	scanf(" %s",&e.empname);
	
	printf("\n\t Enter Employee Address : ");
	scanf(" %s",&e.empaddr);
	
	printf("\n\t Enter Employee Age : ");
	scanf("%d",&e.empage);
	
	printf("\n\t Emplyee Number : %d",e.empno);
	printf("\n\t Emplyee Name : %s",e.empname);
	printf("\n\t Emplyee Address : %s",e.empaddr);
	printf("\n\t Emplyee Age : %d",e.empage);

}
