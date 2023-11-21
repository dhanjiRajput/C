#include<stdio.h>

cube(int r,int c,int *a[r][c])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",(*a[i][j])*(*a[i][j])*(*a[i][j]));
		}
		printf("\n");
	}
}
main()
{
	int r,c,i,j;
	
	printf("Enter Array Row's Size    : ");
	scanf("%d",&r);
	printf("Enter Array Column's Size : ");
	scanf("%d",&c);
	
	int a[r][c];
	printf("===============================================\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] =: ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n===============================================\n");
	int *ptr[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			ptr[i][j]=&a[i][j];
		}
	}
	cube(r,c,*ptr);
	
}