#include<stdio.h>
main()
{
	int i,j,n,k=10;
	printf("Enter How Much Row you Want :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d ",k--);
		}
		printf("\n");
	}
	
}