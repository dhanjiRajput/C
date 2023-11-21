#include<stdio.h>
main()
{
	
	float f,c;
	printf("Enter Temperature in fahernheit :");
	scanf("%f",&f);
	
	c=(f-32)/1.8;
	
	printf("fahernheit  : %.2f\n",f);
	printf("Celcious    : %.2f\n",c);
}