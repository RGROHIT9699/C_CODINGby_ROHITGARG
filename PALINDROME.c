#include<stdio.h>
int main()
{int a,b,s=0;
scanf("%d",&a);
int f=a;
while (f!=0)
{
	b=f%10;
	s=s*10+b;
	f=f/10;
}
if (s==a)
printf("True");
else 
printf("False");
return 0;
}
