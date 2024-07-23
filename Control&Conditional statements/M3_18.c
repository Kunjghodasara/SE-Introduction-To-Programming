#include<stdio.h>
main()
{
	int pprice, sprice,profit,loss;
	
	printf("\n\n\t enter the purchase price of product : ");
	scanf("%d",&pprice);
	
	printf("\n\n\t enter the sell price of product : ");
	scanf("%d",&sprice);
	
	profit = sprice - pprice;
	
	loss = pprice - sprice;
	
	if(sprice>pprice)
	{
		printf("\n\n\t you got profit on tansaction : %drs",profit);
	}
	else
	{
		printf("\n\n\t you got loss on transaction : %drs",loss);
	}
	
}
