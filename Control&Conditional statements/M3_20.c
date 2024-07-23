#include<stdio.h>
main()
{
	int bill,final_bill;
	
	printf("\n\n\t enetr the bill amount : ");
	scanf("%d",&bill);
	
	if(bill>=800)
			final_bill =bill + (bill * 0.18);
			
	if(bill<800 && bill>=256)
			final_bill = bill;
	
	if(bill<256)
			final_bill = 256;
			
			
	printf("\n\n\t you final bill is : %d",final_bill);						
}
