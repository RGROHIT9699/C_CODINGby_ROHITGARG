#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,h;
	printf("Enter The Total Maximum Marks = ");
	scanf("%d",&h);
	printf("Enter the Marks of Maths = ");
	scanf("%d",&a);
	printf("Enter the Marks of Physics = ");
	scanf("%d",&b);
	printf("Enter the Marks of Chemistry = ");
	scanf("%d",&c);
	printf("Enter the Marks of English = ");
	scanf("%d",&d);
	printf("Enter the Marks of Computer = ");
	scanf("%d",&e);
	f=a+b+c+d+e;
	printf("\nTotal Marks = %d",f);
	printf("\nAverage of Marks = %g",f/5.0);
	printf("\nPercentage of Marks = %g %%",(f*100.0)/h);
	return 0;
}
