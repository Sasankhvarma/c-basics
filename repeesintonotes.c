#include<stdio.h>
void main()
{
	int A,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s;
	printf ("enter the amount");
	scanf("%d",&A);
	a=A/2000;b=A%2000;c=b/500;d=b%500;e=d/200;f=d%200;g=f/100;h=f%100;
	i=h/50;j=h%50;k=j/20;l=j%20;m=l/10;n=l%10;o=n/5;p=n%5;q=p/2;r=p%2;
	s=r/1;
	printf("2000 note(s)=%d\n500 note(s)=%d\n200 note(s)=%d\n100 note(s)=%d\n50 note(s)=%d\n20 note(s)=%d\n10 note(s)=%d\n5 coin(s)=%d\n2 coin(s)=%d\n1 coin(s)=%d",a,c,e,g,i,k,m,o,q,s);
}
