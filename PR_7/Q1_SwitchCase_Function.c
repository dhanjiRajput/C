#include<stdio.h>
#include "my_function.c"

main()
{
	int n,n1,n2,n3;
	printf("==============================================\n");
	printf("Press 1 for Addition\n");
	printf("Press 2 for Subtraction\n");
	printf("Press 3 for Multiplication\n");
	printf("Press 4 for Division\n");
	printf("Press 5 for Module\n");
	printf("Press 0 for Exit\n");
	printf("==============================================");
	
	do
	{
		printf("\n\nEnter Your Choice      : ");
		n=input();
		switch(n)
		{
			case 1 :
				printf("\nYou have Selected Operation for Addition\n");
				printf("Enter First Number     : ");
				n1=input();
				printf("Enter Second Number    : ");
				n2=input();
				printf("Addition of %d and %d is : %d",n1,n2,add(n1,n2));
				printf("\n==============================================\n");
				break;
			case 2 :
				printf("\nYou have Selected Operation for Subtraction\n");
				printf("Enter First Number     : ");
				n1=input();
				printf("Enter Second Number    : ");
				n2=input();
				printf("Subtraction of %d and %d is : %d",n1,n2,sub(n1,n2));
				printf("\n==============================================\n");
				break;
			case 3 :
				printf("\nYou have Selected Operation for Multiplication\n");
				printf("Enter First Number     : ");
				n1=input();
				printf("Enter Second Number    : ");
				n2=input();
				printf("Multiplication of %d and %d is : %d",n1,n2,mul(n1,n2));
				printf("\n==============================================\n");
				break;
			case 4 :
				printf("\nYou have Selected Operation for Division\n");
				printf("Enter First Number     : ");
				n1=input();
				printf("Enter Second Number    : ");
				n2=input();
				printf("Division of %d and %d is : %d",n1,n2,div(n1,n2));
				printf("\n==============================================\n");
				break;
			case 5 :
				printf("\nYou have Selected Operation for Module\n");
				printf("Enter First Number     : ");
				n1=input();
				printf("Enter Second Number    : ");
				n2=input();
				printf("Module of %d and %d is : %d",n1,n2,mod(n1,n2));
				printf("\n==============================================\n");
				break;
			default :
				printf("You are exit now....!");
		}
	}while(n!=0);
}