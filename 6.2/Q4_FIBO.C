#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,f3,f1=0,f2=1;
	clrscr();
	printf("Enter Any Number :");
	scanf("%d",&n);

	printf("%d  %d  ",f1,f2);
	for(i=3;i<=n;i++)
	{
		f3=f1+f2;
		printf("%d  ",f3);
		f1=f2;
		f2=f3;
	}
	getch();
}