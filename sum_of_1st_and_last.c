#include<stdio.h>
#include<math.h>
int main()
{
	int g,a,b=1,c,d,s,h,f=1;
	scanf("%d",&a);
	while (a>=b)
	{
		scanf("%d",&c);
		if (c)
		{
			g=c%10;
			while(c>9)
			{
				c=c/10;
			}
			d=g+c;
			printf("%d\n",d);
			}
		b++;
	}
	return 0;
}
