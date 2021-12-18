#include<stdio.h>
void main()
{
	int A,area,peri;
	printf("enter the value of side of square");
	scanf("%d",&A);
	area=A*A ;
	peri=4*A ;
	printf("area of a square with side %d is %d cm.sq \n",A,area);
	printf("perimeter of a square with side %d is %d cm",A,peri);
} 
