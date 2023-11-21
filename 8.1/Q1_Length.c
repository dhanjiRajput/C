#include<stdio.h>
main()
{
	int size,i,len=0;
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
	
	for(i=0;i<size;i++)
	{
		len++;
	}
	printf("Length of an Array :%d",len);

}