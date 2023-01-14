#include<stdio.h>
int main()
{
	int a,b,c=0;
	scanf("%d %d",&a,&b);
	if (a==0 || b==0);
	printf("0");
	while(b!=0)
	{
		if(b&1==1)
		{
			c=c+a;
		}
		a=a<<1;
		b>>=1;
	}
	printf("\r%d",c);
	return 0;	
}
