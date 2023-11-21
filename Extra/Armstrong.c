#include<stdio.h>

main()
{
	int sum=0,n,ld,temp,temp1,len,mul=1;
	
	printf("Enter Any Number :");
	scanf("%d",&n);
	temp=n;
	
	
	
	while(n>0)
	{
		ld=n%10;
		sum=sum+(ld*ld*ld);
		n=n/10;
	}
	
	if(temp==sum)
	{
		printf("The Number Is Armstrong Number");
	}
	else
	{
		printf("The Number Is Not Armstrong Number");
	}
}