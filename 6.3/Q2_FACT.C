#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,f=1;
	clrscr();
	printf("===========================\n");
	printf("Enter Any Number :");
	scanf("%d",&n);
	printf("===========================\n");

	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("The Factorial :%d",f);
	getch();
}