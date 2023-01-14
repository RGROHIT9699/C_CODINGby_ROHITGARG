#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 1st No. ");
	scanf("%d",&a);
    b=a*((a>0)-(a<0));
    printf("The answer is = %d",b);
    return 0;
}
