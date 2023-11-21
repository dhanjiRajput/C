#include<stdio.h>

main()
{
	char ch;
	printf("Enter Any Character :");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case '0': case '1' : case '2': case '3' : case '4': case '5' : case '6': case '7' : case '8': case '9' :
			printf("\n Entered Character is a Digit......!");
			break;
		case 'a': case 'A' : case 'e': case 'E' : case 'i': case 'I' : case 'o': case 'O' : case 'u': case 'U' :
			printf("\n Entered Character is a Vowel......!");
			break;
		default :
			printf("\n Entered Character is a consonant......!");
	}
}