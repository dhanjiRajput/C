#include<stdio.h>
main()
{
	int i,len=0,cmp1=0;
	char name[20];
	char name1[20];
	printf("Enter Any string :");
	scanf("%s",&name);
	
	for(i=0;name[i]!='\0';i++)
	{
		len++;
	}
	
	for(i=0;i<len;i++)
	{
		name1[len-i-1]=name[i];
	}
	
	printf("Original String :%s\n\n",name);
	printf("Reverse String  :%s\n\n",name1);
	
	for(i=0;i<len;i++)
	{
		if(name1[i]==name[i])
		{
			cmp1=1;
		}
	}
	
	if(cmp1==1)
	{
		printf("Enter String is Palindrome...");
	}
	else
	{
		printf("Enter String is Not Palindrome...!");
	}
}