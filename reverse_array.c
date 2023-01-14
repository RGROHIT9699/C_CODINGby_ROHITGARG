#include<stdio.h>
int main()
{
	int a[100],e,r,t,y,u,i;
	printf("enter array: ");
	scanf("%d",&e);
	for (r=0;r<e;r++)
	{
		scanf("%d",a[r]);
	}
	for (r=0,t=e;r<e ;r++)
	{
		y=a[t];
		a[r]=a[t];
		a[t]=y;
		t--;
	}
	for (r=0;r<e;r++)
	{
		printf("%d",a[r]);
	}
	return 0;
}
