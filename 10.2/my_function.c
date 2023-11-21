#include<stdio.h>

arrayinput(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("Enter Array [%d] => ",i);
		scanf("%d",&a[i]);
	}
	printf("======================================\n");
	arrayoutput(a,size);
}

arrayoutput(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("a[%d] => %d\n",i,a[i]);
	}
}

sumofarray(int a[],int size)
{
	int i,sum=0;
	for(i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	printf("\n\nArray Sum is :%d",sum);
}

lenofarray(int a[],int size)
{
	int i,len=0;
	for(i=0;i<size;i++)
	{
		len++;
	}
	printf("\n\nArray Length is :%d",len);
}