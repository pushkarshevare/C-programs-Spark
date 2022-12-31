#include<stdio.h>
main()
{
	int s1,s2,s3;
	printf("Enter Three sides of triangle:");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	if(s1>s2 && s1>s3)
	{
		printf("1st side is bigger than other");
	}
	else if(s2>s1 && s2>s3)
	{
		printf("2nd side is bigger than other");
	}
	else if(s3>s1 && s3>s2)
	{
		printf("3rd side is bigger than other");
	}
}
