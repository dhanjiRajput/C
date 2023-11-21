#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,formula;
	clrscr();
	printf("Enter Value of X :");
	scanf("%d",&x);
	printf("Enter Value os Y :");
	scanf("%d",&y);

	formula=(x*x*x)+(y*y*y)+3*(x*y)*(x+y);
	printf("Your Formula (a+b)^2 answer is :%d",formula);
	getch();
}