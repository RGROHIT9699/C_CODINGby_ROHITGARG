#include<stdio.h>
int main()
{
	int a[100][100],n,c,d,e=0,f=0;
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		for(d=0;d<n;d++)
		{
			scanf("%d",&a[c][d]);
		}
	}
	for(c=0;c<n;c++)
	{
		for(d=0;d<n;d++)
		{
		    if (c+d==n-1)
		    {
			   f=f+a[c][d];
		    }
	    }
	for(c=0;c<n;c++)
	{
		e=e+a[c][c];
	}
	}
	if (f==e)
	{
		printf("Diagonal is equal to Antidiagonal");
	}
	else
	{
		printf("Not Equal");
	}
	return 0;
}
