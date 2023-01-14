#include<stdio.h>
int main()
{
	int n,mn,d=1,mx,a,i=1;
	printf("enter no.");
	scanf("%d",&n);
	while (n>=d)
	{
		scanf("%d",&a);
		if (i==1)
		{
			mn=a;
			mx=a;
			i++;
		}
		 if (a>mx)
		{
			mx=a;
		}
		if (a<mn)
		{
			mn=a;
		}
		d++;
	}
	printf("max=%d\n",mx);
	printf("min=%d",mn);
	return 0;
}
