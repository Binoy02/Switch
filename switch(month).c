/*
  Binoy Das Gupta
  switch case(month)[Grouping in switching]
  28-02-2021
*/
#include<stdio.h>
int main()
{
	int month;
	printf("Enter the number of the month : ");
	scanf("%d",&month);
	switch(month)
	{
		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 :
		case 12 :
			printf("31 Days");
			break;
		case 2 :
			printf("28\29 Days");
			break;
		case 4 :
		case 6 :
		case 9 :
		case 11 :
			printf("30 Days");
			break;
		default :
			printf("Invalid month input!");
	}
	return 0;
}
  
