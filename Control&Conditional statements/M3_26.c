#include<stdio.h>

int main()
{
    int units;
    float bill, b;
    
    printf("\t Enter your units : ");
    scanf("%d", &units);
    
    if(units <= 50)
    {
        bill = units * 0.50;
    }
    else if(units <= 100)
    {
        bill = 50 * 0.50 + (units - 50) * 0.75;
    }
    else if(units <= 250)
    {
        bill = 50 * 0.50 + 50 * 0.75 + (units - 100) * 1.20;
    }
    else 
    {
        bill = 50 * 0.50 + 50 * 0.75 + 150 * 1.20 + (units - 250) * 1.50;
    }
    
    bill = bill + 0.2 * bill;
    
    printf("\t Bill is : %.2f", bill);
}


