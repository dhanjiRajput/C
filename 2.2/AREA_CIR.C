#include<stdio.h>
#include<conio.h>
void main()
{
	int r;
	float area;
	clrscr();
	printf("Enter Radious of Circle :");
	scanf("%d",&r);

	area=3.14*r*r;
	printf("===================================\n");
	printf("Your area of Circle :%.2f\n",area);
	printf("===================================\n");
	getch();
}