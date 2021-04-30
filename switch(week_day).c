/*
  Binoy Das Gupta
  Switch statement 
  28-02-2021
*/
#include<stdio.h>
int main()
{
	int day;
	printf("Enter the day number of a week : ");
	scanf("%d",&day);
	switch(day)
	{
		case 1 :
			printf("Saturday");
			break;
		case 2 :
			printf("Sunday");
			break;
		case 3 : 
			printf("Monday");
			break;
		case 4 :
			printf("Tuesday");
			break;
		case 5 :
			printf("Wednesday");
			break;
		case 6 :
			printf("Thursday");
			break;
		case 7 :
			printf("Friday");
			break;
		default :
			printf("Invalid day! Please enter a valid day number");
	}
	return 0;
}
