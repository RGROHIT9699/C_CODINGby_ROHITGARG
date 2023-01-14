#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d",&a,&d);
	b=a<<d;
	c=a>>d;
	printf("%d,%d",b,c);
	return 0;	
}
