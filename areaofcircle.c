#include<stdio.h>
void main()
{
	float A,area,peri,pi;
	printf("enter the value of radius");
	scanf("%f",&A);
	pi = 3.14;
	area = pi*A*A;
	peri = 2*pi*A;
	printf("area of circe with radius %f is %f\n",A,area);
	printf("perimeter of circle with radius %f is %f",A,peri);
}
