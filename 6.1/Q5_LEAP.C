#include<stdio.h>
#include<conio.h>
void main()
{
	int y1,y2;
	clrscr();
	printf("===============================\n");
	printf("Enter the First Number :");
	scanf("%d",&y1);
	printf("Enter the Second Number:");
	scanf("%d",&y2);
	printf("===============================\n");

	while(y1<=y2)
	{
		if(y1%4==0)
		{
			printf("%d\t",y1);
		}
		y1++;
	}
	getch();
}