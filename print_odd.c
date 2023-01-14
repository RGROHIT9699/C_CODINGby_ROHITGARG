#include<stdio.h>
int main()
{
	int a,n=1,b;
	scanf("%d",&a);
	while (n<=a)
	{
	    b=n%2;
		if (b!=0)
		printf("%d ",n);
		n++;
	}
	return 0;
}
