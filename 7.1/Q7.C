/*
A
B A
C B A
D C B A
E D C B A
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j;
	int n;
	clrscr();
	printf("=================================\n");
	printf("Enter How much you Want :");
	scanf("%d",&n);
	printf("=================================\n");

	for(i=65;i<=64+n;i++)
	{
		for(j=i;j>=65;j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	getch();
}
