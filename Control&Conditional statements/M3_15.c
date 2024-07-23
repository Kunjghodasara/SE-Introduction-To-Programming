#include<stdio.h>
main()
{
	int maths, phy, chem, Total, mp;
	
	printf("\t Enter maths marks : ");
	scanf("%d",&maths);
	
	printf("\t Enter phy marks : ");
	scanf("%d",&phy);
	
	printf("\t Enter chem marks : ");
	scanf("%d",&chem);
	
	mp = maths + phy;
	
	Total = maths + phy + chem;
	
	// Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50
	if(maths >=65 && phy >=55 && chem >= 50 && mp >= 120 && Total >= 170)
	{
		printf("\n\t %d The candidate is eligible for admission",Total);
	}
	else
	{
		printf("\n\t %d The candidate is not eligible for admission",Total);
	}

}
