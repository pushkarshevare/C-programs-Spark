#include<stdio.h>
main()
{
	int s1,s2,s3,total;
	printf("Enter Marks of Maths,Physics And Chemistry:");
	scanf("%d%d%d",&s1,&s2,&s3);
	total=s1+s2+s3;
	printf("Total Marks:%d",total);
	if(s1>=65 && s2>=55 && s3>=50 && total>=180)
	{
		printf("\nYou Are Eligible");
	}
	else
	{
		printf("\nYou are not eligible");
	}
}
