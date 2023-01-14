#include<stdio.h>
int main()
{
	int a,b=1,c,d;
	scanf("%d",&a);
	while (a>0)
	{
		b=a*b;
		a--;
	}
    printf("%d",b);
    return 0;
}
