#include<stdio.h>

main()
{
	char name[20];
	printf("Enter Any String  :");
	scanf("%s",name);
	
	int len=0,pal=0,i;
	for(i=0;name[i]!='\0';i++)
	{
		len++;
	}
	
	for(i=0;i<len;i++)
	{
		if(name[i]!=name[len-i-1])
		{
			pal=1;
		}
	}
	(pal==0)
		? printf("String is Palindrome..")
		: printf("String is Not Palindrome..");
}