/*
	5
      5 4
    5 4 3
  5 4 3 2
5 4 3 2 1*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	clrscr();
	printf("=======================================\n");
	printf("Enter How Much Raw You Want :");
	scanf("%d",&n);
	printf("=======================================\n");
	for(i=n;i>=1;i--)
	{
		for(k=i;k>1;k--)
		{
			printf("  ");
		}
		for(j=n;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}