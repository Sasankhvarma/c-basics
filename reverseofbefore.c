#include<stdio.h>
void main()
{
	int A,B,C;
	printf("enter hours");
	scanf("%d",&A);
	printf("enter minutes");
	scanf("%d",&B);
	C=A*60+B;
	printf("minutes equal to %d minute(s)",C);
}
