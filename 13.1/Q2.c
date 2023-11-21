#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("divisin.txt","w");
	int i,n;
	printf("Enter Any Number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0 && i%5==0)
		{
			fprintf(fp,"%d ",i);
		}
	}
}