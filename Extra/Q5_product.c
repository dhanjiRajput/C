#include<stdio.h>

struct product
{
	char pname[20];
	int price;
	int quant;
	int total;
};
main()
{
	char name[20];
	float mobile;
	int pnm,i;
	int amount,gst;
	printf("Enter Customer Name :");
	scanf("%[^\n]",&name);
	printf("Enter Mobile Number :");
	scanf("%f",&mobile);
	
	printf("\nEnter Variet Of Product Number :");
	scanf("%d",&pnm);
	struct product p1[pnm];
	
	for(i=0;i<pnm;i++)
	{
		printf("\n\nProduct No : %d / %d\n\n",i+1,pnm);
		printf("Enter Product Name      :");
		scanf("%s",&p1[i].pname);
		printf("Enter Product Price     :");
		scanf("%d",&p1[i].price);
		printf("Enter Product Quantity  :");
		scanf("%d",&p1[i].quant);
	}
	system("cls");
	
	printf("\n\n====================== Your Bill ======================\n");
	printf("-------------------------------------------------------\n");
	printf("Customer Name      :%s\n",name);
	printf("Mobile No.         :%fs\n",mobile);
	printf("-------------------------------------------------------\n");
	
	printf("Product Name\tPrice\tQuant.\t\tTotal\n");
	printf("-------------------------------------------------------\n");
	for(i=0;i<pnm;i++)
	{
		p1[i].total=p1[i].price*p1[i].quant;
		printf("%s\t\t%d\t%d\t\t%d\n",p1[i].pname,p1[i].price,p1[i].quant,p1[i].total);
	}
	printf("-------------------------------------------------------\n");
	for(i=0;i<pnm;i++)
	{
		amount=amount + p1[i].total;
	}
	printf("Total Bill Amount\t\t\t%d\n\n",amount);
	gst=amount*18/100;
	printf("GST (18 %%) Added\t\t\t%d\n",gst);
	printf("-------------------------------------------------------\n");
	printf("Your Total Bill Amount(WIth GST)\t%d",gst+amount);
	printf("\n\n=======================================================\n");	
}
