#include<stdio.h>
void main()
{
	int A,B,sum,diff,prod,quot,remain;
	printf("enter two numbers");
	scanf("%d,%d",&A,&B);
	sum=A+B;
	diff=A-B;
	prod=A*B;
	quot=A/B;
	remain=A%B;
	printf("sum of %d and %d is %d\n",A,B,sum);
	printf("difference of %d and %d is %d\n",A,B,diff);
	printf("product of %d and %d is %d\n",A,B,prod);
	printf("quotient when %d is divided by %d is %d\n",A,B,quot);
	printf("remainder of %d and %d is %d\n",A,B,remain);
}
