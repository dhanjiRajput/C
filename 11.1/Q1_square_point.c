#include<stdio.h>
main()
{
	int i,n;
	printf("Enter Array size :");
	scanf("%d",&n);
	
	int a[n];
	int square[n];

	printf("Enter Array Elements :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] =>",i);
		scanf("%d",&a[i]);
	}
	int *ptr[n];
	for(i=0;i<n;i++)
	{
		ptr[i]=&a[i];
	}
	
	for(i=0;i<n;i++)
	{
		square[i]=(*ptr[i])*(*ptr[i]);
	}
	printf("Sqaure of Ea0ch Elements : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",square[i]);
	}
}