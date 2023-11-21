/*
1
2 3
4 5 6
7 8 9 10  */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,k=0;
	clrscr();
	printf("==================================\n");
	printf("Enter How Much Raw you Want :");
	scanf("%d",&n);
	printf("==================================\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k++);
		}
		printf("\n");
	}
	getch();
}