#include<stdio.h>
main()
{
	char a[30];
	
	printf("Enter Any String :");
	scanf("%[^\n]",&a);
	
	char *ptr[30];
	int i,len=0;
	
	for(i=0;a[i]!='\0';i++)
	{
		ptr[i]=&a[i];
	}
	
	printf("\n\nYour String is : ");
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c",*ptr[i]);
	}
	
	for(i=0;ptr[i]!='\0';i++)
	{
		len++;
	}
	printf("\n\nThe Length of a String is :%d",len);
}