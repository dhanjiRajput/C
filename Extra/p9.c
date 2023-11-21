#include<stdio.h>
main()
{
	int n;
	char i,j,k,k1;
	printf("Enter How Much Row you Want :");
	scanf("%d",&n);
	
	for(i=65;i<=64+n;i++)
	{
		k=97;
		k1=65;
		for(j=65;j<=i;j++)
		{
			printf("%c%c%c  ",j,k++,k1++);
		}
		printf("\n");
	}
	
}