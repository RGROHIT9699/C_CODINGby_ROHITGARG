#include<stdio.h>
int main()
{
	int a,b=1,c=0;
	scanf("%d",&a);
	while (a>=b)
	{
		c=b+c;
		b++;
 	}
 	printf("%d",c);
 	return 0;
}
