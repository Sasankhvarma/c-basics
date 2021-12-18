#include<stdio.h>
void main()
{
    int A,hours,minutes;
	printf("enter the value of minutes");
	scanf("%d",&A);
	hours=A/60;
	minutes=A%60;
	printf("%d hour(s) %d minute(s)",hours,minutes);
}
