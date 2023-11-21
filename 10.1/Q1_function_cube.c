#include<stdio.h>
#include "my_function.c"

main()
{
	printf("Enter Any Number :");
	int a=input();
	
	int n=cube(a);
	printf("Cube is :%d",n);
}