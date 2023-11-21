/*      A
      B A
    C B A
  D C B A
E D C B A*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j,k,n;
	clrscr();
	printf("=======================================\n");
	printf("Enter How Much Raw You Want :");
	scanf("%d",&n);
	printf("=======================================\n");
	for(i=65;i<=64+n;i++)
	{
		for(k=i;k<64+n;k++)
		{
			printf("  ");
		}
		for(j=i;j>=65;j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	getch();
}