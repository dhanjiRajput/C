#include<stdio.h>
main()
{
	int n,f1=0,f2=1,f3;
	printf("Enter Number Of Step :");
	scanf("%d",&n);
	
	if(n==1)
	{
		printf("\n %d ",n);
	}
	
	if(n>=2)
	{
		printf("%d  %d  ",f1,f2);
		
		for(int i=2;i<n;i++)
		{
			f3=f1+f2;
			printf("%d  ",f3);
			f1=f2;
			f2=f3;
		}
	}
}