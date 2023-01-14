#include<stdio.h>
int main()
{
	int a,b,x,y,h,l,t;
	scanf("%d %d",&x,&y);
	a=x;
	b=y;
	while (b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	h=a;
	l=(x*y)/h;
	printf("%d\n",h);
	printf("%d",l);
	return 0;
}
