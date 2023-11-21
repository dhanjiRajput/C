#include<stdio.h>

int input()
{
	int n;
	scanf("%d",&n);
	
	return n;
}

int sum(int n)
{
	int i,sum=0;
	printf("Your N Digits is :");
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		printf("%d ",i);
	}
	return sum;	
}

main()
{
	int n,i;
	printf("Enter N Number :")	;
	n=input();
	
	printf("\nYour Sum is :%d",sum(n));
}