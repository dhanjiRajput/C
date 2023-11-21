#include<stdio.h>
main()
{
	int r,c,i,j;
	printf("========================================================\n");
	printf("Enter the Arrays Row Size    :");
	scanf("%d",&r);
	printf("Enter the Array Columns Size :");
	scanf("%d",&c);
	printf("========================================================\n");
	
	int a[r][c],b[r][c];
	printf("Enter Arrays Elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("========================================================\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("========================================================\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	
	printf("\nThe Transponse Matrix of an Array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

}