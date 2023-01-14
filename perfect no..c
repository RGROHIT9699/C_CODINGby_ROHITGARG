#include<stdio.h>
int main()
{
	int a,b=1,c=0,d;
	scanf("%d",&a);
	while (b<a)
	{
		if (a%b==0)
		{
			printf("%d\n",b);
			c=b+c;
		}
		b++;
	}
	if (c==a)
	{printf("Prefect Number");
	}
	else
	printf("Not");
	return 0;
}
