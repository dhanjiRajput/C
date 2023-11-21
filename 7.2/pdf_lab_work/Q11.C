/*
* * * * *
  * * * *
    * * *
      * *
	* */
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
		for(k=i;k<n;k++)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}