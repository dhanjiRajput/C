#include<stdio.h>
main()
{
	int size,i,sq;
	printf("===========================================\n");
	printf("Enter Array Size :");
	scanf("%d",&size);
	
	int a[size];
	printf("===========================================\n");
	printf("Enter Array Elemets : \n");
	for(i=0;i<size;i++)
	{
		printf("[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("===========================================\n");
	printf("The Square are :");
	for(i=0;i<size;i++)
	{
			sq=a[i]*a[i];
			printf("%d ",sq);
	}
	
	
}