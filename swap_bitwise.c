#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("before %d,%d\n",a,b);
	a=a^b;
    b=b^a;
    a=a^b;
	printf("after %d,%d",a,b);
	return 0;
}
