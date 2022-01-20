#include<stdio.h>
void main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
	    for(j=i;j<=n && j>0;j--)
		{
			printf("* ");
		}
		printf("\n");	
	}
}
