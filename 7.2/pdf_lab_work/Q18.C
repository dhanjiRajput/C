/*      1         1
      1 0       1 2
    1 0 1     1 2 3
  1 0 1 0   1 2 3 4
1 0 1 0 1 1 2 3 4 5*/
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
		for(k=n;k>i;k--)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",i%2);
		}
		printf("\n");
	}
	getch();
}