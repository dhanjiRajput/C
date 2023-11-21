// Zelenski Formulla
#include<stdio.h> 
main()
{
	int d,m,y,dw;
	printf("===============================================\n");
	printf("Enter the Value of Day   :");
	scanf("%d",&d);
	printf("Enter the Value of Month :");
	scanf("%d",&m);
	printf("Enter the Value of Year  :");
	scanf("%d",&y);
	
	//Zelenski Formulla
	d+=m<3?y--:y-2;
	dw=(23*m/9+d+4+y/4-y/100+y/400)%7;
	
	printf("================================================\n");
	printf("You were Born on :");
	switch(dw)
	{
		case 0:
			printf("SunDay");
			break;
		case 1:
			printf("MonDay");
			break;
		case 2:
			printf("TuesDay");
			break;
		case 3:
			printf("WednesDay");
			break;
		case 4:
			printf("ThursDay");
			break;
		case 5:
			printf("FriDay");
			break;
		case 6:
			printf("SaturDay");
			break;
	}
	printf("\n================================================\n");
}