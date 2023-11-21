#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter First value of A :");
	scanf("%d",&a);
	printf("Enter Second Value of B :");
	scanf("%d",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("\n================================\n");
	printf("\nYour First Value of A  :%d \n",a);
	printf("your Second Value of B :%d \n",b);
	printf("==================================");
	getch();
}