#include<stdio.h>

struct stud
{
	int student;
	int roll;
	char name[20];
	int chem;
	int Math;
	int phy;
	int total;
	float per;
};

main()
{
	struct stud p1;
	printf("Enter Details of Student 1 :\n")	;
	printf("Roll No     :");
	scanf("%d",&p1.roll);
	printf("Name        :");
	scanf("%s",&p1.name);
	printf("Chemestry   :");
	scanf("%d",&p1.chem);
	printf("Mathematics :");
	scanf("%d",&p1.Math);
	printf("Physics     :");
	scanf("%d",&p1.phy);
	printf("\n==============================================\n");
	
	struct stud p2;
	printf("Enter Details of Student 2 :\n")	;
	printf("Roll No     :");
	scanf("%d",&p2.roll);
	printf("Name        :");
	scanf("%s",&p2.name);
	printf("Chemestry   :");
	scanf("%d",&p2.chem);
	printf("Mathematics :");
	scanf("%d",&p2.Math);
	printf("Physics     :");
	scanf("%d",&p2.phy);
	printf("\n==============================================\n");
	
	struct stud p3;
	printf("Enter Details of Student 3 :\n")	;
	printf("Roll No     :");
	scanf("%d",&p3.roll);
	printf("Name        :");
	scanf("%s",&p3.name);
	printf("Chemestry   :");
	scanf("%d",&p3.chem);
	printf("Mathematics :");
	scanf("%d",&p3.Math);
	printf("Physics     :");
	scanf("%d",&p3.phy);
	printf("\n==============================================\n");
	
	struct stud p4;
	printf("Enter Details of Student 1 :\n")	;
	printf("Roll No     :");
	scanf("%d",&p4.roll);
	printf("Name        :");
	scanf("%s",&p4.name);
	printf("Chemestry   :");
	scanf("%d",&p4.chem);
	printf("Mathematics :");
	scanf("%d",&p4.Math);
	printf("Physics     :");
	scanf("%d",&p4.phy);
	printf("\n==============================================\n");
	
	struct stud p5;
	printf("Enter Details of Student 5 :\n")	;
	printf("Roll No     :");
	scanf("%d",&p5.roll);
	printf("Name        :");
	scanf("%s",&p5.name);
	printf("Chemestry   :");
	scanf("%d",&p5.chem);
	printf("Mathematics :");
	scanf("%d",&p5.Math);
	printf("Physics     :");
	scanf("%d",&p5.phy);



	p1.total=p1.chem+p1.Math+p1.phy;
	p1.per=p1.total/3;
	printf("\n============================================\n");
	printf("%s(%d)",p1.name,p1.roll);
	printf("\n============================================\n");
	printf("Chemestry      : %d\n",p1.chem);
	printf("Mathematics    : %d\n",p1.Math);
	printf("Physics        : %d\n",p1.phy);
	printf("Total          : %d\n",p1.total);
	printf("Percentage(%%)  : %.2f\n",p1.per);
	printf("\n============================================\n\n");
	
	
	p2.total=p2.chem+p2.Math+p2.phy;
	p2.per=p2.total/3;
	printf("\n============================================\n");
	printf("%s(%d)",p2.name,p2.roll);
	printf("\n============================================\n");
	printf("Chemestry      : %d\n",p2.chem);
	printf("Mathematics    : %d\n",p2.Math);
	printf("Physics        : %d\n",p2.phy);
	printf("Total          : %d\n",p2.total);
	printf("Percentage(%%)  : %.2f\n",p2.per);
	printf("\n============================================\n\n");
	
	
	p3.total=p3.chem+p3.Math+p3.phy;
	p3.per=p3.total/3;
	printf("\n============================================\n");
	printf("%s(%d)",p3.name,p3.roll);
	printf("\n============================================\n");
	printf("Chemestry      : %d\n",p3.chem);
	printf("Mathematics    : %d\n",p3.Math);
	printf("Physics        : %d\n",p3.phy);
	printf("Total          : %d\n",p3.total);
	printf("Percentage(%%)  : %.2f\n",p3.per);
	printf("\n============================================\n\n");
	
	
	p4.total=p4.chem+p4.Math+p4.phy;
	p4.per=p4.total/3;
	printf("\n============================================\n");
	printf("%s(%d)",p4.name,p4.roll);
	printf("\n============================================\n");
	printf("Chemestry      : %d\n",p4.chem);
	printf("Mathematics    : %d\n",p4.Math);
	printf("Physics        : %d\n",p4.phy);
	printf("Total          : %d\n",p4.total);
	printf("Percentage(%%)  : %.2f\n",p4.per);
	printf("\n============================================\n\n");
	
	
	p5.total=p5.chem+p5.Math+p5.phy;
	p5.per=p5.total/3;
	printf("\n============================================\n");
	printf("%s(%d)",p5.name,p5.roll);
	printf("\n============================================\n");
	printf("Chemestry      : %d\n",p5.chem);
	printf("Mathematics    : %d\n",p5.Math);
	printf("Physics        : %d\n",p5.phy);
	printf("Total          : %d\n",p5.total);
	printf("Percentage(%%)  : %.2f\n",p5.per);
	printf("\n============================================\n\n");
}