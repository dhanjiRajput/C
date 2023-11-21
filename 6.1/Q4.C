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

	while(n>=a)
	{
		if(n%2!=0)
		{
			printf("%d ",n);
		}
		n--;
	}
	getch();
}