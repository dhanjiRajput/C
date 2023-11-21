#include<stdio.h>
main()
{
	int len,i,j,k;
	printf("\n=====================================================\n");
	printf("Enter Array Size :");
	scanf("%d",&len);
	printf("\n=====================================================\n");
	int array[len];
	
	for(i=0;i<len;i++)
	{
		printf("array[%d] =>",i);
		scanf("%d",&array[i]);
	}
	printf("\n=====================================================\n");
	printf("\n Entered Elements : ");
	for(i=0;i<len;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n=====================================================\n");
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(array[i]>array[j])
			{
				k=array[i];
				array[i]=array[j];
				array[j]=k;
			}
		}
	}
	printf("\nAscending Order Elements : ");
	for(i=0;i<len;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n=====================================================\n");
	
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(array[i]<array[j])
			{
				k=array[i];
				array[i]=array[j];
				array[j]=k;
			}
		}
	}
	printf("\nDescending Order Elements : ");
	for(i=0;i<len;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n=====================================================\n");
}