#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c,s;
	float area;
	clrscr();
	printf("Enter First side of Triangle  :");
	scanf("%d",&a);
	printf("Enter Second side of Triangle :");
	scanf("%d",&b);
	printf("Enter Third side of Triangle  :");
	scanf("%d",&c);

	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\n====================================\n");
	printf("Your Area Of Triangle :%.2f\n",area);
	printf("====================================\n");
	getch();
}