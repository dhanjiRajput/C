#include<stdio.h>
main()
{
	int i,n,j,k,a=1;
	printf("Enter N Step :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(k=n;k>i;k--)
		{
			printf("  ");
		}
		a=i;
		for(j=i;j>=1;j--)
		{
			printf("%d ",a++);
		}
		a=a-1;
		for(j=2;j<=i;j++)
		{
			printf("%d ",--a);
		}
		printf("\n");
	}
}