#include<stdio.h>
main()
{
	int i,n1,n2;
	printf("===========================================\n");
	printf("Enter First Year  :");
	scanf("%d",&n1);
	printf("Enter Second Year :");
	scanf("%d",&n2);
	printf("===========================================\n");
	
	int size=(n2-n1)/4+1;
	int a[size],index=0;
	
	for(i=n1;i<=n2;i++)
	{
		if(i%4==0)
		{
			a[index]=i;
			index++;
		}
	}
	
	printf("The Leap Year in Array :");
	for(i=0;i<index;i++)
	{
		printf("%d ",a[i]);
	}
}