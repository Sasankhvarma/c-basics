#include<stdio.h>
void main()
{
	int H,M,S,a,sec;
	printf("enter the value of sec");
	scanf("%d",&sec);
	H=sec/3600;
	a=sec%3600;
	M=a/60;
	S=a%60;
	printf("hour(s)=%d\nminute(s)=%d\nsecond(s)=%d",H,M,S);
}
