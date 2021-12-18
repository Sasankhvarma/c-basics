#include<stdio.h>
void main()
{
	float P,R,T,si;
	printf("enter the value principal\n");
	scanf("%f",&P);
	printf("enter the value rate_of_interest\n");
	scanf("%f",&R);
	printf("enter the value of time in years");
	scanf("%f",&T);
	si =P*R*T/100;
	printf("simple_interest is equal to %.3f rupees ",si);
}
