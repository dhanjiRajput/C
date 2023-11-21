#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter a value of First  Number :");
	scanf("%d",&a);
	printf("Enter a value of Second Number :");
	scanf("%d",&b);
	printf("Enter a value of Third  Number :");
	scanf("%d",&c);

	(a<b)
		?(a<c)
			? printf("The Minimum Value is :%d",a)
			: printf("The Minimum Value is :%d",c)
		:(b<c)
			? printf("The Minimum Value is :%d",b)
			: printf("The Minimum Value is :%d",c);
	getch();
}