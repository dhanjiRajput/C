#include<stdio.h>
main()
{
	FILE *fp;
	FILE *fp1;
	char val[20];
	
	//printf("Enter Your Value :");
	//scanf("%[^\n]",&val);
	
	//fp=fopen("Myfile.txt","w");
	//fprintf(fp,"Value is : %s",val);
	
	fp1=fopen("Myfile.txt","r");
	fscanf(fp1,"%[^\n]",&val);
	
	printf("Value is :%s",val);
	fclose(fp);
}