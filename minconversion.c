#include<stdio.h>
void main()
{
	int min,H,M;
	printf("enter the value of minutes");
	scanf("%d",&min);
	H=min/60;
	M=min%60;
	printf("hour(s)=%d\nminute(s)=%d",H,M);
}
