/*
5 4 3 2 1
  4 3 2 1
    3 2 1
      2 1
	1
 */
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
	for(i=n;i>=1;i--)
	{
		for(k=n;k>i;k--)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}