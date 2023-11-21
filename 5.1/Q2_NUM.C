#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("============================\n");
	printf("Enter Any Number :");
	scanf("%d",&n);
	printf("============================\n\n");

	if(n<0)
	{
		printf("The Number is Negative :%d",n);
	}
	else if(n>0)
	{
		printf("The Number is Positive :%d",n);
	}
	else
	{
		printf("The Number is Neutral :%d",n);
	}
	getch();
}
