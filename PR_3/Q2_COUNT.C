#include<stdio.h>
#include<conio.h>
void main()
{
	int n,len=0,i;
	clrscr();
	printf("Enter Any Number :");
	scanf("%d",&n);


	while(n!=0)
	{
		n=n/10;
		len++;
	}
	printf("Total number of digits :%d",len);
	getch();
}