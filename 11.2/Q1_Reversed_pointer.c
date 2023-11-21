#include<stdio.h>
main()
{
	int i,n;
	printf("Enter the Array Size :");
	scanf("%d",&n);
	
	int a[n],b[i];
	printf("Enter Array Elements :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] =>",i);
		scanf("%d",&a[i]);
	}
	
	int *ptr[n];
	int *ptr1[n];
	
	for(i=0;i<n;i++)
	{
		ptr[i]=&a[i];
	}
	
	printf("\nBefore Reversed Elements : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",*ptr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		ptr1[n-i-1]=ptr[i];
	}
	
	printf("\n\nAfter Reversed Elements  : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",*ptr1[i]);
	}
}