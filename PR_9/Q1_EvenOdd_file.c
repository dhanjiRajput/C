#include<stdio.h>
main()
{
	FILE *f1;
	FILE *f2;
	f1=fopen("Even_Number.txt","w");
	f2=fopen("Odd_Number.txt","w");
	
	int i,n1,n2;
	printf("Enter First Number  :");
	scanf("%d",&n1);
	printf("Enter Second Number :");
	scanf("%d",&n2);
	
	for(i=n1;i<=n2;i++)
	{
		if(i%2==0)
		{
			fprintf(f1,"%d  ",i);
		}
		else
		{
			fprintf(f2,"%d  ",i);
		}
	}
	
}