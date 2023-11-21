#include<stdio.h>
main()
{
	int size,i;
	float avg,sum=0;
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
		sum=sum+a[i];
		avg=sum/size;
	}
	printf("Average of an Array :%.2f",avg);

}