#include<stdio.h>
int power_no(int,int);
int main()
{
	int a,b,c,d;
	printf("Enter No.");
	scanf("%d",&a);
	printf("Enter Power");
	scanf("%d",&b);
	c= power_no(a,b);
	printf("%d",c);
	return 0;
}
    int power_no(a,b)
{
	int p,r=1,q=b;
	p=b;
	while(p>0)
	{
		r=a*r;
		p--;
	}
	return (r);	
}

