/*
A B C D E
  A B C D
    A B C
      A B
	A*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j,k,n;
	clrscr();
	printf("=======================================\n");
	printf("Enter How Much Raw You Want :");
	scanf("%d",&n);
	printf("=======================================\n");
	for(i=64+n;i>=65;i--)
	{
		for(k=i;k<64+n;k++)
		{
			printf("  ");
		}
		for(j=65;j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	getch();
}