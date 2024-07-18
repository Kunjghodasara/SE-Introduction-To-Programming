#include<stdio.h>
main()
{
	int A, B, C;
	
	printf("\tEnter Value of A : ");
	scanf("%d",&A);
	printf("\n\tEnter Value of B : ");
	scanf("%d",&B);
	
	printf("\n\t Before Swipe : %d and %d",A, B);
	
	C = A;
	A = B;
	B = C;
	
	printf("\n\t After Swipe : %d and %d",A, B);	
}
