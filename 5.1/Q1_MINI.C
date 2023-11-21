#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("====================================\n");
	printf("Enter a Value of First Number  :");
	scanf("%d",&a);
	printf("Enter a Value of Second Number :");
	scanf("%d",&b);
	printf("====================================\n");

	if(a<b)
	{
		printf("The Minimum Value is :%d",a);
	}
	else
	{
		printf("The Minimum Value is :%d",b);
	}
	getch();
}