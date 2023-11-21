#include<stdio.h>
main()
{
	int size,i,len=0;
	printf("===========================================\n");
	printf("Enter Array Size :");
	scanf("%d",&size);
	
	int a[size],b[size],c[size];
	printf("===========================================\n");
	printf("Enter A Array Elemets : \n");
	for(i=0;i<size;i++)
	{
		printf("[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter B Array Elemets : \n");
	for(i=0;i<size;i++)
	{
		printf("[%d] = ",i);
		scanf("%d",&b[i]);
	}
	printf("===========================================\n");
	printf("Array C is : ");
	for(i=0;i<size;i++)
	{
		c[i]=a[i]+b[i];
		printf("%d ",c[i]);
	}

}