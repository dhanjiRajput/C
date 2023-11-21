#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter Value of A :");
	scanf("%d",&a);
	printf("Enter Value of B :");
	scanf("%d",&b);

	c=a;
	a=b;
	b=c;

	printf("\nYoue Value of A :%d\n",a);
	printf("Your Value of B :%d",b);
	getch();
}
