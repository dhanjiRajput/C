#include<stdio.h>
main()
{
	int i,lwr=0,upr=0,num=0,sym=0;
	char name[20];
	
	printf("Create Your Password :");
	scanf("%[^\n]",&name);
	if(strlen(name)>6)
	{
		for(i=0;name[i]!='\0';i++)
		{
			if(name[i]>=97&&name[i]<=122)
			{
				lwr=1;
			}
			else if(name[i]>=65&&name[i]<=90)
			{
				upr=1;
			}
			else if(name[i]>33&&name[i]<=47||name[i]>=58&&name[i]<=64)
			{
				sym=1;
			}
			else if(name[i]>=48&&name[i]<=57)
			{
				num=1;
			}
		}
		
		if(num==1 && sym==1&& lwr==1&&upr==1)
		{
			printf("Your Password is Strong...");
		}
		else
		{
			printf("Your Password is not Strong...");
		}
	}
	else
	{
		printf("Password Must Be 6 Character...!");
	}
}