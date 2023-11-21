#include<stdio.h>
#include<conio.h>
void main()
{
	char n='a';
	clrscr();
	do
	{
		printf("%c ",n);
		n=n+4;
	}
	while(n<='z');
	getch();
}