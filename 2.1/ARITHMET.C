#include<stdio.h>
#include<conio.h>
void main()
{
	int a,s,m,d,mo,n1,n2;
	clrscr();
	printf("Enter First Number :");
	scanf("%d",&n1);
	printf("Enter Second Number :");
	scanf("%d",&n2);
	a=n1+n2;
	s=n1-n2;
	m=n1*n2;
	d=n1/n2;
	mo=n1%n2;
	printf("\n===========================================\n");
	printf("Addition       of %d and %d is : %d\n",n1,n2,a);
	printf("Subtraction    of %d and %d is : %d\n",n1,n2,s);
	printf("Multiplication of %d and %d is : %d\n",n1,n2,m);
	printf("Division       of %d and %d is : %d\n",n1,n2,d);
	printf("Module         of %d and %d is : %d\n",n1,n2,mo);
	printf("=============================================\n");
	getch();
}