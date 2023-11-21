#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	printf("Enter Any Name :");
	scanf("%s",name);
	
	int len=strlen(name),i,j,f;
	
	for(i=0;i<len;i++)
	{
		f=1;
		if(name[i]!='\0')
		{
			for(j=i+1;j<len;j++)
			{
				if(name[i]==name[j])
				{
					f++;
					name[j]='\0';
				}
			}
			printf("%c => %d\n",name[i],f);
		}
	}
}