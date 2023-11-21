#include<stdio.h>
#include<conio.h>
void main()
{
	int n,n1,n2,n3;
	clrscr();
	printf("===============================\n");
	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujarati\n");
	printf("===============================\n\n");

	printf("Enter Your Choice :");
	scanf("%d",&n);

	switch(n)
	{
		case 1 :
			printf("===================================\n");
			printf("Press 1 for Internet Recahrge\n");
			printf("Press 2 for Top-up Recharge\n");
			printf("Press 3 for Special Recharge\n");
			printf("===================================\n");
			printf("Enter Your Choice :");
			scanf("%d",&n1);
			switch(n1)
			{
				case 1 :
					printf("You have successfully done Internet Recharge");
					break;
				case 2 :
					printf("You have successfully done Top-up Recharge");
					break;
				case 3 :
					printf("You have successfully done special Recharge");
					break;
				default :
					printf("Plzz Enter Valid Operation..");
					break;
			}
			break;
		case 2 :
			printf("===================================\n");
			printf("Internet Recharge ke Liye 1 dabaiye\n");
			printf("Top-up Recharge   ke Liye 2 Dabaiye\n");
			printf("Special Recharge  ke Liye 3 Dabaiye\n");
			printf("===================================\n");
			printf("Aapni Pasand ka Chayan Kare :");
			scanf("%d",&n2);
			switch(n2)
			{
				case 1 :
					printf("Aapne Safalatapurvak Internet Recharge kar Liya he.");
					break;
				case 2 :
					printf("Aapne Safalatapurvak Top-up Recharge Kar liya he.");
					break;
				case 3 :
					printf("Aapne Safalatapurvak special Recharge kar Liya he.");
					break;
				default :
					printf("Kripiya sahi Vikallp Chune....");
					break;
			}
			break;
		case 3 :
			printf("===================================\n");
			printf("Internet Recahrge mate 1 Dabavo.\n");
			printf("Top-up Recharge   mate 2 Dabavo.\n");
			printf("Special Recharge  mate 3 dabavo.\n");
			printf("===================================\n");
			printf("Tmari Pasandgi dakhal Karo :");
			scanf("%d",&n3);
			switch(n3)
			{
				case 1 :
					printf("Tame Safalatapurvak Internet Recharge Karyu che..");
					break;
				case 2 :
					printf("Tame Safalatapurvak Top-up Recharge Karyu che..");
					break;
				case 3 :
					printf("Tame Safalatapurvak special Recharge karyu che..");
					break;
				default :
					printf("sacho vikalp Pasand Karo..");
					break;
			}
			break;
	}
	getch();
}