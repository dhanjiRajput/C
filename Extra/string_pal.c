#include<stdio.h>

main()
{
	char name[20];
	char name1[20];
	printf("Enter Any String  :");
	scanf("%s",name);
	
	int i,len=0,cmp=0;
	for(i=0;name[i]!='\0';i++)
	{
		len++;
	}
	
	for(i=len;i>=0;i--)
	{
		name1[len-i-1]=name[i];
	}
	printf("%s\n\n",name);
	printf("%s\n\n",name1);
	
	for(i=0;i<len;i++)
	{
		if(name[i]==name1[i])
		{
			cmp=1;
		}
	}
	if(cmp==1)
	{
		printf("String is Plaindorme..");
	}
	else
	{
		printf("String is not an Palindrome..");
	}
} 