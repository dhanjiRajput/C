#include<stdio.h>
#include<conio.h>
void main()
{
	float hra,da,ta,sa;
	clrscr();
	printf("Enter Basic Salary :");
	scanf("%f",&sa);

	hra=sa*10/100;
	da=sa*5/100;
	ta=sa*8/100;
	printf("\n=============================\n");
	printf("Your HRA :%.2f\n",hra);
	printf("Your DA  :%.2f\n",da);
	printf("Your TA  :%.2f\n",ta);
	printf("=============================\n");
	printf("Your Gross Salary is : %.2f\n",sa+hra+da+ta);
	printf("=============================\n");
	getch();
}