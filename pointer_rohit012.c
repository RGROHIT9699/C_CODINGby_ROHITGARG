#include<stdio.h>
void swa_p(int *,int*);
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("before swapping %d and %d \n",a,b);
	swa_p(&a,&b);
	printf("after swapping %d and %d",a,b);
}
void swa_p(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	
}
