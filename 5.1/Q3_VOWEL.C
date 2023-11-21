#include<stdio.h>
#include<conio.h>
void main()
{
	char n;
	clrscr();
	printf("===============================\n");
	printf("Enter Any Character :");
	scanf("%c",&n);
	printf("===============================\n");


	if(n=='a'|| n=='e'||n=='i'||n=='o'||n=='u'||
	   n=='A'|| n=='E'||n=='I'||n=='O'||n=='U')
	{
		printf("This Character is Vowel..");
	}
	else
	{
		printf("This Character is consonant..");
	}
	getch();
}