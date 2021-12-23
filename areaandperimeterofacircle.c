#include<stdio.h>
void main()
{
	float r,area,peri;
	printf("enter the value of radius");
	scanf("%f",&r);
	area=3.14*r*r;
	peri=2*3.14*r;
	printf("area = %f\n perimeter = %f",area,peri);
}
