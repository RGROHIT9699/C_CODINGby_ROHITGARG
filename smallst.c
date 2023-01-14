#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 1st No.");
	scanf("%d",&a);
	printf("Enter 2nd No.");
	scanf("%d",&b);
	c=a*(a<b)+b*(b<a);
	printf("%d",c);
	return 0;	
}
