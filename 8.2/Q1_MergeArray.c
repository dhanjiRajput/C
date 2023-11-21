#include<stdio.h>
main()
{
	int size,size1,i;
	printf("===========================================\n");
	printf("Enter A Array Size :");
	scanf("%d",&size);
	
	printf("Enter B Array Size :");
	scanf("%d",&size1);
	
	int a[size],b[size1],c[size+size1];
	printf("===========================================\n");
	printf("Enter A Array Elemets : \n");
	for(i=0;i<size;i++)
	{
		printf("[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter B Array Elemets : \n");
	for(i=0;i<size1;i++)
	{
		printf("[%d] = ",i);
		scanf("%d",&b[i]);
	}
	printf("===========================================\n");
	for(i=0;i<size;i++)
	{
		c[i]=a[i];
	}
	
	for(i=0;i<size1;i++)
	{
		c[i+size]=b[i];
	}
	printf("Array C is :\n");
	for(i=0;i<size+size1;i++)
	{
		printf("c[%d] =%d\n",i,c[i]);
	}
	
	

}