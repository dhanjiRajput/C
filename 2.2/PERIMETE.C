#include<stdio.h>
#include<conio.h>
void main()
{
	int r;
	float area;
	clrscr();
	printf("Enter radious of Circle :");
	scanf("%d",&r);

	area=2*3.14*r;
	printf("\n===================================\n");
	printf("Perimiter of Circle :%.2f\n",area);
	printf("===================================\n");
	getch();
}