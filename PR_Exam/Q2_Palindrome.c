#include<stdio.h>

int getReverse(int n)
{
	int rem=0,rev;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev;
}

isPalindrome(int n)
{
	int n1=n;
	printf("Original Number    :%d\n",n1);
	int temp=getReverse(n);
	if(n1==temp)
	{
		printf("Your Number is Palindrome....");
	}
	else
	{
		printf("Your Number Is Not An Paindrome..");
	}
}

main()
{
	int n;
	printf("Enter Any Number :");
	scanf("%d",&n);
	isPalindrome(n);
}
