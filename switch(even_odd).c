/*
  Binoy Das Gupta
  Even or odd using switch
  01-03-2021
*/
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number = ");
	scanf("%d",&num);
	
	switch(num%2==0)
	{
		case 0 :
			printf("%d is odd",num);
			break;
		case 1 :
			printf("%d is even",num);
			break;
	}
	return 0;
}
