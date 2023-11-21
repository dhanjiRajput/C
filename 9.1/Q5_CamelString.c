#include<stdio.h>
main()
{
	int i,spindex;
	char name[20];
	printf("==================================================\n");
	printf("Enter Any String :");
	scanf("%[^\n]",&name);
	printf("==================================================\n");
	printf("\nOriginal String :%s",name);
	
	if(name[0]>='a'&&name[0]<='z')
	{
		name[i]=name[i]-32;
	}
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==32)
		{
			spindex=i;
		}
	}
	
	for(i=spindex;name[i]!='\0';i++)
	{
		name[i]=name[i+1];
		if(name[spindex]>='a'&&name[spindex]<='z')
		{
			name[i]=name[i]-32;
		}
	}
	printf("\n\nCamel Case String :%s",name);
}