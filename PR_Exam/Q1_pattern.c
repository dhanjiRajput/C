/*      1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5 */
#include<stdio.h>
main()
{
	int i,j,k,a,n;
	printf("Enter N Step :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=n;k>i;k--)
		{
			printf("  ");
		}
		a=i;
		for(j=i;j>=1;j--)
		{
			printf("%d ",a++);
		}
		a=a-1;
		for(j=2;j<=i;j++)
		{
			printf("%d ",--a);
		}
		printf("\n");
	}
}