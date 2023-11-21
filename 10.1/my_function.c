#include<stdio.h>

// Input Function
int input()
{
	int n;
	scanf("%d",&n);
	return n;
}

//Cube Function
int cube(int a)
{
	return a*a*a;
}

//Divide Function

divide(int a)
{
	if(a%3==0 && a%5==0)
	{
		printf("The given Number is divisible by both 3 & 5");
	}
	else
	{
		printf("The given Number is not divisible by both 3 & 5");
	}
}