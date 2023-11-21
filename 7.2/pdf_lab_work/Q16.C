/*
A B C D E
  B C D E
    C D E
      D E
	E*/
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
	for(i=65;i<=64+n;i++)
	{
		for(k=65;k<i;k++)
		{
			printf("  ");
		}
		for(j=i;j<=64+n;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	getch();
}