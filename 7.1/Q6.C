/*
1 0 1 0 1     1 2 3 4 5
1 0 1 0       1 2 3 4
1 0 1         1 2 3
1 0           1 2
1             1 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("=================================\n");
	printf("Enter How much you Want :");
	scanf("%d",&n);
	printf("=================================\n");

	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j%2);
		}
		printf("\n");
	}
	getch();
}
