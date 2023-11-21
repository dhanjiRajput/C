#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,n;
	clrscr();
	printf("==============================\n");
	printf("Enter Any Number :");
	scanf("%d",&n);
	printf("==============================\n");

	while(a<=n)
	{
		printf("%d ",a);
		a++;
	}
	getch();
}