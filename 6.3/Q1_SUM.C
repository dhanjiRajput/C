#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	clrscr();
	printf("===========================\n");
	printf("Enter Any Number :");
	scanf("%d",&n);
	printf("===========================\n");

	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		printf("%d ",i);
	}
	printf("\n====================================\n");
	printf("\nThe Sum of all Numbes :%d\n",sum);
	printf("====================================");
	getch();
}