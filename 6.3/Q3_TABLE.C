#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("===========================\n");
	printf("Enter Any Number :");
	scanf("%d",&n);
	printf("===========================\n");

	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
	printf("============================");
	getch();
}