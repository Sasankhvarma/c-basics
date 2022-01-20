#include<stdio.h>
void main()
{
	int i,s,c=0,a,b;
	scanf("%d%d",&a,&b);
	for(a;a<=b;a++)
	{
	   s=0;
	   for(i=2;i<=a/2;i++)
	    {
		    if(a%i==0)
			  {
				s=1;
				break;
			  }
        }
        if(s==0 && a!=1)
		  {
			    c++;
	      }
    }
	printf("%d",c);
}
