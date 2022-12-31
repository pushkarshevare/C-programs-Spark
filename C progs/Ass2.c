#include<stdio.h>
main()
{
	char ch;
	printf("Enter a Character:");
	scanf("%c",&ch);
	if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
	{
		printf("\n%c is Vowel",ch);
	}
	else
	{
		printf("\n%c is Consonant",ch);
	}
}
