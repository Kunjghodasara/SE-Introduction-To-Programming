#include<stdio.h>

struct person
{
	char name[50];
	int age;
	float height;
}p;

union data
{
	char name[50];
	int age;
	float height;
}U;


main()
{
	printf("\n\n\t structure : ");
	printf("\n\n\t enter name of person : ");
	gets(p.name);
	
	printf("\n\n\t enter age of person : ");
	scanf("%d",&p.age);
	
	printf("\n\n\t enter person's height : ");
	scanf("%f",&p.height);
	
	printf("\n\n\t person name : %s",p.name);
	printf("\n\n\t person age : %d",p.age);
	printf("\n\n\t person's height : %.2f",p.height);
	
	printf("\n\n\t union : ");
	printf("\n\n\t enter name of person : ");
	scanf(" %s",&U.name);
	printf("\n\n\t person name : %s",U.name);
	
	printf("\n\t enter age of person : ");
	scanf("%d",&U.age);
	printf("n\n\t person age : %d",U.age);
	
	printf("\n\n\t enter person's height : ");
	scanf("%f",&U.height);
	printf("\n\n\t person's height : %.2f",U.height);
}


