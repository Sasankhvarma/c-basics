#include<stdio.h>
void main()
{
	int a,s,n,l,sum;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of s");
	scanf("%d",&s);
	n=s/a;
	l=a*n;
	sum=n*(a+l)/2;
	printf("sum equal to %d",sum);
}
