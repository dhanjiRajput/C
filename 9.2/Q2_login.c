#include<stdio.h>
main()
{
	char id1[]="kidechadhanji@gmail.com";
	char pass1[]="123456";
	
	char id2[strlen(id1)];
	char pass2[strlen(pass1)];
	printf("\n==========================================================\n");
	printf("Enter Your User Name  :");
	scanf("%s",&id2);
	
	printf("Enter Your Password   :");
	scanf("%s",&pass2);
	printf("\n==========================================================\n");
	
	int cmp1=strcmp(id2,id1);
	int cmp2=strcmp(pass2,pass1);
	
	if(cmp1==0 && cmp2==0)
	{
		printf("\n\nLogin Successfully......");
	}
	else
	{
		printf("\n\nInvalid User Name and Password.....!");
	}
}