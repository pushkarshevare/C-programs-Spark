#include<stdio.h>
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
}
