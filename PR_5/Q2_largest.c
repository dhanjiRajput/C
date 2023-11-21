#include<stdio.h>
main()
{
	int r,c,i,j,max=0;
	printf("Enter the Arrays Row Size    :");
	scanf("%d",&r);
	printf("Enter the Array Columns Size :");
	scanf("%d",&c);
	
	int a[r][c];
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
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
	}
	printf("The Largest Element is :%d",max);

}