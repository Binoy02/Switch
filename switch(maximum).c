/*
  Binoy Das Gupta
  switch(conditional case)[find maximum between two numbers]
  01-03-2021
*/
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the first number = ");
	scanf("%d",&num1);
	printf("Enter the second number = ");
	scanf("%d",&num2);
	
	switch(num1>num2)
	{
		case 0 :
			printf("%d is maximum",num2); //here case 0 represents condition in switch is false
			break;
		case 1 :
			printf("%d is maximum",num1); // here case 1 represents condition in switch is true
			break;
	}
	return 0;
}
