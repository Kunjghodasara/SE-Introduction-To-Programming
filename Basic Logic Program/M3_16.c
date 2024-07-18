#include<stdio.h>
main()
{
	char c1[25] = "South Africa";
	char c2[25] = "INDIA";
	char c3[25] = "United Arab Emirates";
	char c4[25] = "United State Of America";
	char c5[25] = "United Kingdom";
	
	
	printf("\n\n\t South Africa : abbreviated %c.%c.%c",c1[5],c1[8],c1[9]);
    printf("\n\n\t INDIA : abbreviated %c.%c.%c",c2[2],c2[1],c2[3]);
    printf("\n\n\t United Arab Emirates : abbreviated %c.%c.%c",c3[6],c3[9],c3[12]);
    printf("\n\n\t United State Of America : abbreviated %c.%c.%c",c4[5],c4[7],c4[9]);	
	printf("\n\n\t United Kingdom: abbreviated %c.%c.%c",c5[1],c5[5],c5[7]);
}
