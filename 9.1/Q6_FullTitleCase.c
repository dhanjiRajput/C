#include<stdio.h>
main()
{
	int i;
	char name[20];
	printf("===============================================\n");
	printf("Enter Any String :");
	scanf("%[^\n]",&name);
	printf("===============================================\n");
	printf("Orginal String :%s\n",name);
	
	if(name[0]>='a'&&name[0]<='z')
	{
		name[i]=name[i]-32;
	}
	
	for(i=1;name[i]!='\0';i++)
	{
		if(name[i]>='A'&&name[i]<='Z')
		{
			name[i]=name[i]+32;
		}
		if(name[i]==32)
		{
			i++;
			name[i]=name[i]-32;
		}
	}
	printf("\nTitle Case String :%s",name);
}