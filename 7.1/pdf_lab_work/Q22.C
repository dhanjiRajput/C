/*
1        A
2 3      B C
4 5 6    D E F
7 8 9 10 G H I J */
#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j,n,k=65;
	clrscr();
	printf("==================================\n");
	printf("Enter How Much Raw you Want :");
	scanf("%d",&n);
	printf("==================================\n");
	for(i=65;i<=64+n;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c ",k++);
		}
		printf("\n");
	}
	getch();
}