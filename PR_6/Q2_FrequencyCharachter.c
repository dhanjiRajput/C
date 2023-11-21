#include<stdio.h>
main()
{
	int i,f,j,len;
	char name[20];
	
	printf("Enter any string :");
	scanf("%s",&name);
	
	len=strlen(name);
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