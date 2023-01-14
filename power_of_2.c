#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c=0,d;
	scanf("%d",&a);
	while (a>b)
	{
		c++;
		b=pow(2,c);
	}
		if (a==b)
		printf("Yes");
		else
		printf("No");
	return 0;
}
