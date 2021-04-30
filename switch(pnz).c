/*
  Binoy Das Gupta
  positive, negative or zero using switch
  01-03-2021
*/
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	switch(num>0)
	{
		case 0 :
			switch(num<0)
			{
				case 0 :
					printf("%d is zero",num);
					break;	
				case 1 :
					printf("%d is negative",num);
					break;
			}
			break;
		case 1 :
			printf("%d is positive",num);
			break;
	}
	return 0;
}
