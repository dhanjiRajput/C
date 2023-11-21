#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("==============================\n");
	printf("Enter First  Number :");
	scanf("%d",&a);
	printf("Enter Second Number :");
	scanf("%d",&b);
	printf("Enter Third  Number :");
	scanf("%d",&c);
	printf("==============================\n");

	if(a<b)
	{
		if(a<c)
		{
			printf("The Minimum Value is :%d",a);
		}
		else
		{
			printf("The Minimum Value is :%d",c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("The Minimum Value is :%d",b);
		}
		else
		{
			printf("The Minimum Value is :%d",c);
		}
	}
	getch();
}