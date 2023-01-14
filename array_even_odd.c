#include<stdio.h>
int main()
{
	int a[1000],n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if (a[i]%2==0)
		printf("0");
		else
		printf("1");
	}
	return 0;
}
