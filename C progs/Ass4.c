#include<stdio.h>
main()
{
	int bs,hra,da,gsal;
	printf("Enter Your Basic Salary:");
	scanf("%d",&bs);
	if(bs<=10000)
	{
		hra=bs*20/100;
		da=bs*80/100;
	}
	else if(bs<=20000)
	{
		hra=bs*25/100;
		da=bs*90/100;
	}
	else if(bs>20000)
	{
		hra=bs*30/100;
		da=bs*95/100;
	}
	gsal=bs+hra+da;
	printf("\nGross salary is:%d",gsal);
	
}
