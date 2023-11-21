#include<stdio.h>
main()
{
	int r,c,i,j;
	float sum=0,avg;
	printf("===================================================\n");
	printf("Enter Array Row's size    :");
	scanf("%d",&r);
	printf("Enter Array Column's Size :");
	scanf("%d",&c);
	printf("===================================================\n");
	
	int a[r][c],b[r][c],s[r][c];
	
	printf("Enter A Array's Elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Enter B Array's Elements :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] =",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("===================================================\n");
	printf("Array C is :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
}