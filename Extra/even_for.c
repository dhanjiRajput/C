#include<stdio.h>

main()
{
	int n,i,j,sum=0,sum1=0;
	printf("\n==============================================\n");
	printf("Enter N step :");
	scanf("%d",&n);
	printf("\n==============================================\n");
	printf("Odd Number\tEven Number\n");
	printf("\n==============================================\n");
	for(i=1;i<=n*2;i++)
	{
		if(i%2==0)
		{
			printf("%d\t\t\n",i);
			sum=sum+i;
		}
		else
		{
			printf("%d\t\t",i);
			sum1=sum1+i;
		}
	}
	printf("\n==============================================\n");
	printf("%d\t\t",sum);
	printf("%d",sum1);
	printf("\n==============================================\n");
}