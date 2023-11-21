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
			sum=sum+a[i][j];
			avg=sum/(r*c);
		}
	}
	
	printf("The Sum is :%f\n\n",sum);
	printf("Average of an Array :%.2f\n",avg);
}