/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5 */
#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j,n;
	clrscr();
	printf("==================================\n");
	printf("Enter How Much Raw you Want :");
	scanf("%d",&n);
	printf("==================================\n");
	for(i=65;i<=64+n;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	getch();
}