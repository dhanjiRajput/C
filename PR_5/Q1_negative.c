#include<stdio.h>
main()
{
	int size,i,cmp=0;
	printf("====================================================\n");
	printf("Enter Array size :");
	scanf("%d",&size);
	printf("====================================================\n");
	
	int a[size];
	
	for(i=0;i<size;i++)
	{
		printf("a[%d] =>",i);
		scanf("%d",&a[i]);
	}
	printf("\n====================================================\n");
	printf("Negative Elements from an Array :");
	for(i=0;i<size;i++)
	{
		if(a[i]<0)
		{
			printf("%d ",a[i]);
		}
		else
		{
			cmp=1;
		}
	}
	if(cmp==1)
	{
		printf("\n\nNo Negative Elements is this Array...");
	}
}