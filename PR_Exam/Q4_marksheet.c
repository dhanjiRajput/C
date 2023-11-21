#include<stdio.h>

struct marksheet
{
	char name[20];
	int roll;
	int s1;
	int s2;
	int s3;
	int total;
	int per;
	char grade;
};



main()
{
	struct marksheet m1;
	FILE *fp;
	fp=fopen("Marksheet.txt","w");
	
	printf("Enter Your Name :");
	scanf("%s",&m1.name);
	printf("Roll Number     :");
	scanf("%d",&m1.roll);
	printf("Maths     :");
	scanf("%d",&m1.s1);
	printf("Gujarati  :");
	scanf("%d",&m1.s2);
	printf("Sanskrit  :");
	scanf("%d",&m1.s3);
	
	
	fprintf(fp,"==============================================\n");
	fprintf(fp,"===================MARKSHEET==================\n");
	fprintf(fp,"==============================================\n");
	fprintf(fp,"Student Name : %s\n",m1.name);
	fprintf(fp,"Roll No.    : %d\n",m1.roll);
	fprintf(fp,"==============================================\n");
	fprintf(fp,"Subject\t\tMarks\n");
	fprintf(fp,"Mathematics\t :%d\n",m1.s1);
	fprintf(fp,"Gujarati\t :%d\n",m1.s2);
	fprintf(fp,"Sanskrit\t :%d\n",m1.s3);
	fprintf(fp,"==============================================\n");
	fprintf(fp,"Total\t\t:%d\n",m1.s1+m1.s2+m1.s3);
	m1.per=(m1.s1+m1.s2+m1.s3)/3;
	fprintf(fp,"Percentage\t:%d\n",m1.per);

	if(m1.per>=91)
	{
		fprintf(fp,"Grade\t\t :A");
	}
	else if(m1.per>=81 && m1.per<=90)
	{
		fprintf(fp,"Grade\t\t :B");
	}
	else if(m1.per>=71 && m1.per<=80)
	{
		fprintf(fp,"Grade\t\t :c");
	}
	else if(m1.per>=60 && m1.per<=70)
	{
		fprintf(fp,"Grade\t\t :D");
	}
	else
	{
		fprintf(fp,"Grade\t\t:Do More Practice..");
	}
	
}