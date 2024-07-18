#include<stdio.h>
main()
{
	double A ,B;
	
	printf("\n\n\t enter value of A : ");
	scanf("%lf",&A);
	printf("\n\n\t enter value of B : ");
	scanf("%lf",&B);
	
	printf("\n\n\t before swapping : A = %.2lf & B = %.2lf",A,B);
	
	A = A * B;
	B = A / B;
	A = A / B;
	printf("\n\n\t after swapping : A = %.2lf & b = %.2lf",A,B);
	 return 0;	
}
