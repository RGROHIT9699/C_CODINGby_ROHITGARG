#include<stdio.h>
#include<math.h>
int arm_strong(int);
int main()
{
	int a,b,c;
	printf("Enter No: ");
	scanf("%d",&a);
	b= arm_strong(a);
	if (b==a)
	{
		printf("ARM");
	}
	else 
	printf("not");
	return 0;
	
}
    int arm_strong (int a)
{
	int p,q=1,r,s=0,dd,cc,vv;
	p=a;
	while(a>9)
	{
		a=a/10;
		q++;
	}
	vv=q;
	while (p>0)
	{
		dd=p%10;
		s=pow(dd,q)+s;
		p=p/10;		
	}
	return (s);
}

