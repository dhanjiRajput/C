#include<stdio.h>
main()
{
	
	char a[20];
	int i;
	printf("================================================\n");
	printf("Enter Any String :");
	scanf("%s",&a);
	printf("================================================\n");
	
	printf("Orignal String :%s",a);
	
	if(a[0]>='a'&&a[0]<='z')
	{
		a[i]=a[i]-32;
	}
	
	for(i=1;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
	}
	printf("\n\nTitle case String :%s",a);
}