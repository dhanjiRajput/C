#include<stdio.h>
#include "my_function.c"

main()
{
	int n;
	printf("======================================\n");
	printf("Enter Array size :");
	scanf("%d",&n);
	printf("======================================\n");
	
	int array[n];
	arrayinput(array,n);
	sumofarray(array,n);
}