#include<stdio.h>
int main()
{
	int a,b=1,c,d;
	scanf("%d",&a);
	while (b<a)
	{
		if (a%b==0)
		printf("%d ",b);
		b++;
	}
	return 0;
}
