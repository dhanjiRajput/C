/*
1 2 3 4 5
  2 3 4 5
    3 4 5
      4 5
	5 */
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
	for(i=1;i<=n;i++)
	{
		for(k=i;k>1;k--)
		{
			printf("  ");
		}
		for(j=i;j<=n;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}