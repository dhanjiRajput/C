#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter How Much Row you Want :");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=i;j<=n;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	
}