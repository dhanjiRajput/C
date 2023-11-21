/*
5 4 3 2 1
  5 4 3 2
    5 4 3
      5 4
	5 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	clrscr();
	printf("=================================\n");
	printf("Enter How Much Raw You Want :");
	scanf("%d",&n);
	printf("=================================\n");
	for(i=1;i<=5;i++)
	{
		for(k=1;k<i;k++)
		{
			printf("  ");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}