#include<stdio.h>
main()
{
	int age;
	printf("==================================================\n");
	printf("Age(years)        = Message..\n");
	printf("0-2               = Still a Baby..\n");
	printf("3-12              = Chilldren..\n");
	printf("13-17             = Tenager..\n");
	printf("18-26             = Young Adult..\n");
	printf("27-39             = Middle Age..\n");
	printf("40-79             = Grand Parents..\n");
	printf("80 And Above      = You are Thanked to God..\n");
	printf("==================================================\n");
	
	printf("Enter Your Age :");
	scanf("%d",&age);
	printf("\n==================================================\n");
	if(age>0 && age<=2)
	{
		printf("Still a Baby..");
	}
	else if(age>=3 && age<=12)
	{
		printf("Chilldren..");
	}
	else if(age>=13 && age<=17)
	{
		printf("Tenager..");
	}
	else if(age>=18 && age<=26)
	{
		printf("Young Adult..");
	}
	else if(age>=27 && age<=39)
	{
		printf("Middlle Age..");
	}
	else if(age>=40 && age<=79)
	{
		printf("Grand parents..");
	}
	else if(age>=80)
	{
		printf("you are Thanks to God..");
	}
	else
	{
		printf("Enter Valid Age....");
	}
}