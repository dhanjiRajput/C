#include<stdio.h>
#include<conio.h>
void main()
{
	float p,r,n;
	float i;
	clrscr();
	printf("Enter Principal Amount :");
	scanf("%f",&p);
	printf("Enter Rate of Amount   :");
	scanf("%f",&r);
	printf("Enter year of Amount   :");
	scanf("%f",&n);

	i=(p*r*n)/100;
	printf("=============================================\n");
	printf("\nYour Simple Interest is        :%.2f\n",i);
	printf("Your Total Amount with Interet :%.2f\n",i+p);
	printf("=============================================");
	getch();
}