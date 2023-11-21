#include<stdio.h>

struct employee
{
	int id;
	char name[20];
	int age;
	char role[20];
	char city[20];
	int exp;
	char company[20];
};

main()
{
	int n,i;
	printf("Enter How Much Employee Records :");
	scanf("%d",&n);
	
	struct employee s1[n];
	for(i=0;i<n;i++)
	{
		system("cls");
		printf("Your Record No. = %d / %d\n\n",i+1,n);
		printf("Enter Eployee ID           :");
		scanf("%d",&s1[i].id);
		printf("Enter Eployee Name         :");
		scanf("%s",&s1[i].name);
		printf("Enter Eployee Age          :");
		scanf("%d",&s1[i].age);
		printf("Enter Eployee Role         :");
		scanf("%s",&s1[i].role);
		printf("Enter Eployee City         :");
		scanf("%s",&s1[i].city);
		printf("Enter Eployee Experience   :");
		scanf("%d",&s1[i].exp);
		printf("Enter Eployee Company Name :");
		scanf("%s",&s1[i].company);
	}
	system("cls");
	
	printf("\n\n============================ EMPLOYEE RECORD ==========================\n");
	printf("=======================================================================\n");
	printf("  ID\tName\tAge\tRole\tCity\tExperience\tCompany\n");
	printf("=======================================================================\n");
	
	for(i=0;i<n;i++)
	{
		printf("  %d\t%s\t%d\t%s\t%s\t\t%d\t%s\n",s1[i].id,s1[i].name,s1[i].age,s1[i].role,s1[i].city,s1[i].exp,s1[i].company);
	}
}