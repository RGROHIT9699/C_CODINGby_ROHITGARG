#include<stdio.h>
int main()
{
	int a[100],s,f=0,b,c,d,w=0;
	printf("array");
	scanf("%d",&c);
	for (d=0;d<c;d++)
	{
    	scanf("%d",&a[d]);
	}
	printf("enter no to find");
	scanf("%d",&b);
	for (s=0;s<c-1;s++)
	{
		if (a[s]==b)
		{
			printf("position :%d\n",s);			
		}
		else
		{ f=f+1;
		}
	}
	if (f==c)
	printf("not found");
	return 0;
}
