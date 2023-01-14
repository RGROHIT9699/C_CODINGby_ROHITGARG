#include<stdio.h>
int prime_no(int);
int main()
{	  int b,k;
printf("Enter No.");
	scanf("%d",&b);
	k=prime_no(b);
	if (k==2)
	{
		printf("Prime No.");
	}
	else
	{
		printf("Composite No.");
	}
	return 0;
}
int prime_no(int b)
{
	int c,d=0;
	for(c=1;c<=b;c++)
	{
		if (b%c==0)
		{
			d++;
		}
	}
	return (d);	
}
