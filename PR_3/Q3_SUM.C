#include<stdio.h>
#include<conio.h>
void main()
{
	int n,fd,ld;
	clrscr();
	printf("Enter Any Number :");
	scanf("%d",&n);

	ld=n%10;
	while(n>=9)
	{
		n=n/10;
	}
	fd=n;
	printf("The sum of the First and Last digit :%d",fd+ld);
	getch();
}