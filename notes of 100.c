#include<stdio.h>
int main()
{
	
	int a,b,c,d,e;
	printf("Enter the amount");
	scanf("%d",&a);
	b=(a-100)/2000;
	printf("\nNo. of 2000 Notes = %d",b);
	c=(a-100)%2000;
	d=c/500;
	printf("\nNo of 500 Notes = %d",d);
	e=c%500;
	printf("\nNo of 100 Notes = %d",e/100+1);	
	printf("\n--------------------\n|Notes of 2000 = %d|\n|Notes of 500  = %d|\n|Notes of 100  = %d|",b,d,e/100+1);
	return 0;
}
