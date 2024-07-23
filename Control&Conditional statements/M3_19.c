#include<stdio.h>
main()
{
	int ID,units;
	char name[20];
	
	printf("\t Enter User ID : ");
	scanf("%d",&ID);
	
	printf("\t Enter User Name : ");
	scanf("% s",&name);
	gets(name);
	//puts(name);
	
	printf("\t Enter User Consumed Units : ");
	scanf("%d",&units);
	
	if(units<350)
		printf("\t %s you have to pay %.2frs",name,units*1.20);
	
	else if(units>=350 && units<600)
		printf("\t %s you have to pay %.2frs",name,units*1.50);
	
	else if(units>=600 && units<800)
		printf("\t %s you have to pay %.2frs",name,units*1.80);
		
	else if(units>=800)
		printf("\t %s you have to pay %.2frs",name,units*2.00);
	
	else
		printf("\t Invalid Value.......");
	
}
