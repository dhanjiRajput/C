#include<stdio.h>
#include<conio.h>
void main()
{
	float c,temp;
	clrscr();
	printf("The Temperature in Celcius :");
	scanf("%f",&c);

	temp=(c*9/5)+32;
	printf("The Temperature in Fahrenheit :%.2f",temp);
	getch();
}