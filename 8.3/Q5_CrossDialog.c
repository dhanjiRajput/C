#include<stdio.h>
main()
{
	int r,c,i,j,sum=0;
	printf("===================================================\n");
	printf("Enter Array Row's size    :");
	scanf("%d",&r);
	printf("Enter Array Column's Size :");
	scanf("%d",&c);
	printf("===================================================\n");
	
	int a[r][c];
	
	printf("Enter Array's Elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("===================================================\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("===================================================\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i+j==2)
			{
				printf("%d ",a[i][j]);
				sum=sum+a[i][j];
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n===================================================\n");
	printf("\nThe Sum of Cross Dialog Elements of an Array :%d\n",sum);
	printf("===================================================\n");
}