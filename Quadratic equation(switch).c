/*
  Binoy Das Gupta
  Finding roots of a quadratic equation using switch[ax^2+bx+c]
  05-03-2021
*/

#include<stdio.h>
#include<math.h>
int main()
{
	//declaring variables
	double a,b,c; //a,b = co-efficients of x^2,x & c = constant 
	double d,x1,x2,imaginary; //d = discriminant, x1 = x2 = roots of quadratic equation
	
	//taking inputs
	printf("Enter the values of a,b,c = ");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	//discriminant formula
	d = (b*b) - (4*a*c) ;
	
	switch(d>0)
	{
		// if discriminant is positive
		case 1 : 
			x1 = (-b+sqrt(d))/(2*a);
			x2 = (-b-sqrt(d))/(2*a);
			printf("The real roots of the quadratic equation are : %0.2lf , %0.2lf",x1,x2);
			break;
		
		// if discriminant is zero or negative
		case 0 :
			switch(d==0)
			{
				case 1 :
					x1 = x2 = (-b)/(2*a);
					printf("The roots of the quadratic equation are : %0.2lf , %0.2lf",x1,x2);
					break;
			}
			switch(d<0)
			{
				case 1 :
					x1 = x2 = (-b)/(2*a);
					imaginary = sqrt(-d)/(2*a);
					printf("The complex roots of the quadratic equation are : %0.2lf+i%0.2lf , %0.2lf-i%.0.2lf",x1,imaginary,x2,imaginary);
					break;
			}
			break;
	}
	return 0;
}
