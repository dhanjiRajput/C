#include<stdio.h>

main()
{
	float h,m,s,n;
	printf("====================================================\n");
	printf("Enter The Value of  Day :");
	scanf("%f",&n);
	printf("\n====================================================\n");
	
	h=n*24;
	m=h*60;
	s=m*60;
	
	printf("Number Of days              : %.2f\n",n);
	printf("Number Of Hours  in the Day : %.2f\n",h);
	printf("Number Of Minute in the Day : %.2f\n",m);
	printf("Number Of Second in the Day : %.2f\n",s);
}