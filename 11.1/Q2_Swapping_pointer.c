#include<stdio.h>
main()
{
	int x,y,z;
	printf("Enter the Value of X :");
	scanf("%d",&x);
	printf("Enter the Value of Y :");
	scanf("%d",&y);
	
	
	printf("Before Swapping :\n");
	printf("X : %d\n",x);
	printf("Y : %d\n",y);
	
	int *ptr1;
	int *ptr2;
	
	ptr1=&x;
	ptr2=&y;
	
	z=*ptr1;
	*ptr1=*ptr2;
	*ptr2=z;
	
	printf("After Swapping :\n");
	printf("X : %d\n",*ptr1);
	printf("Y : %d\n",*ptr2);	
}