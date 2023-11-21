/*
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("==================================\n");
	printf("Enter How Much Raw you Want :");
	scanf("%d",&n);
	printf("==================================\n");
	for(i=n;i>=1;i--)
	{
		for(j=i;j<=n;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}