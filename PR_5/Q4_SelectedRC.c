#include<stdio.h>
main()
{
	int r,c,i,j,sum=0,sum1=0,cmp=0,cmp1=0;
	printf("===================================================\n");
	printf("Ente Array Rows Size     :");
	scanf("%d",&r);
	printf("Enter Array Columns Size :");
	scanf("%d",&c);
	printf("===================================================\n");
	
	int a[r][c];
	printf("Enter Array Elements \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] =>",i,j);
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
	int r1,c1;
	printf("Enter Row Number      : ");
	scanf("%d",&r1);
	
	printf("Elements of Row %d     : ",r1);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==r1)
			{
				printf("%d ",a[i][j]);
				sum=sum+a[i][j];
			}
			else
			{
				cmp=1;
			}
		}
	}
	printf("\nThe Sum of a Row %d    : %d",r1,sum);
	printf("\n===================================================\n");
	
	
	printf("Enter Column Number   : ");
	scanf("%d",&c1);
	printf("Elements of Column %d  : ",c1);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==c1)
			{
				printf("%d ",a[i][j]);
				sum1=sum1+a[i][j];
			}
		}
	}
	printf("\nThe Sum of a Column %d : %d",c1,sum1);
	printf("\n===================================================\n");
}