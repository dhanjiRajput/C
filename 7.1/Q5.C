/*
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5*/
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
		for(j=i;j<=n;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	getch();
}