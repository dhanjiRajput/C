#include<stdio.h>
#include<conio.h>
void main()
{
	int l,b;
	float area;
	clrscr();
	printf("Enter Length Of Rectangle :");
	scanf("%d",&l);
	printf("Enter Width of Rectangle  :");
	scanf("%d",&b);

	area=l*b;
	printf("\n=================================\n");
	printf("Your Area of Rectangle :%.2f\n",area);
	printf("=================================\n");
	getch();
}