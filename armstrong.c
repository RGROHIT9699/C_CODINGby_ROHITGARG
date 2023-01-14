#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int a,b,c=0,d,e=0,f,r,w;
	scanf("%d",&a);
	d=a;
	f=d;
	while(a>0)
	{
		a=a/10;
		c++;
	}
	w=c;
	while (c>0)
	{
		r=d%10;
		e=pow(r,w)+e;
		d=d/10;
		c--;
	}
	if (e==f)
	printf("Armstrong");
	else
	printf("not");
	getch();
	return 0;
}
