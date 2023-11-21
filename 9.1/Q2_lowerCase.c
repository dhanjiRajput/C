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
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
	}
	printf("\n\nLowercase String :%s",a);
}