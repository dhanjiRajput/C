#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	clrscr();
	printf("==============================\n");
	printf("Enter Any Number :");
	scanf("%d",&n);
	printf("==============================\n");

	do
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
		i++;
	}while(i<=n);
	getch();
}