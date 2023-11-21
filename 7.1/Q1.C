/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("===================================\n");
	printf("Enter How Much Raw you Want :");
	scanf("%d",&n);
	printf("===================================\n");
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}