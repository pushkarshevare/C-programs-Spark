#include<stdio.h>
main()
{
	int s1,s2,s3,s4,s5,total,per;
	printf("Enter Phy,Chem,Bio,Math and Comp Marks:");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	printf("Total Marks:%d",total);
	per=(total*100)/500;
	printf("Percentage is:%d",per);
	if(per>=90 && per<=100)
	{
		printf("\nGrade A");
	}
	else if(per>=80 && per<90)
	{
		printf("\nGrade B");
	}
	else if(per>=70 && per<80)
	{
		printf("\nGrade C");
	}
	else if(per>=60 && per<70)
	{
		printf("\nGrade D");
	}
	else if(per>=40 && per<60)
	{
		printf("\nGrade E");
	}
	else if(per<40)
	{
		printf("\nGrade F");
	}
	else
	{
		printf("\nFail");
	}
}
