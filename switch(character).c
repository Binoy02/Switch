/*
  Binoy Das Gupta
  switch case(vowel & consonant)
  01-03-2021
*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :
			printf("The character is vowel");
			break;
		default :
			printf("The character is consonant");
	}
	return 0;
}
