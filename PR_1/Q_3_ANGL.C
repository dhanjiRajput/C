#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;

	clrscr();
	printf("=======================================\n");
	printf("Enter the First angle of Triangle :");
	scanf("%d",&a);
	printf("Enter the Second angle of Triangle :");
	scanf("%d",&b);
	printf("=======================================\n");

	c=180-(a+b);
	printf("Your Third angle of Triangle :%d",c);
	getch();

}