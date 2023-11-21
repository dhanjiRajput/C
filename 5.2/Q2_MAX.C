#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("=========================================\n");
	printf("Enter a Value of the First  Number :");
	scanf("%d",&a);
	printf("Enter a Value of the Second Number :");
	scanf("%d",&b);
	printf("Enter a Value of the Third  Number :");
	scanf("%d",&c);
	printf("Enter a Value of the Fourth Number :");
	scanf("%d",&d);
	printf("=========================================\n");

	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				printf("The Maximum number is :%d",d);
			}
			else
			{
				printf("The Maximum number is :%d",a);
			}
		}
		else
		{
			if(c<d)
			{
				printf("The Maximum number is :%d",d);
			}
			else
			{
				printf("The Maximum number is :%d",c);
			}
		}
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{
				printf("The Maximum number is :%d",d);
			}
			else
			{
				printf("The Maximum number is :%d",b);
			}
		}
		else
		{
			if(c<d)
			{
				printf("The Maximum number is :%d",d);
			}
			else
			{
				printf("The Maximum number is :%d",c);
			}
		}
	}
	getch();
}