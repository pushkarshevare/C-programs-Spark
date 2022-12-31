#include<stdio.h>
void add();
main()
{
	int i,n,fact=1;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
  {
  fact=fact*i;
  }
  printf("\nfact=%d",fact);
printf("Wel-come");

	add();
}
	void add()
	{
		int a,b,c;
		printf("\nEnter a&b:");
		scanf("%d%d",&a,&b);
		c=a+b;
		printf("\n Add=%d",c);
}
