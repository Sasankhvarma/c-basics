#include<stdio.h>
void main()
{
	float A,B,area,perimeter;
	printf("enter the value of breadth\n");
	scanf("%f",&A);
	printf("enter the value of length");
	scanf("%f",&B);
	area = A*B;
	perimeter = 2*A+2*B;
	printf("area of rectangle is %.3f\n",area);
	printf("perimeter of rectangle is %.3f",perimeter);
}
