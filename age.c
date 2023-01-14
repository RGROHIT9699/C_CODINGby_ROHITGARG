#include<stdio.h>
int main()
{
	int a;
	printf("Enter the age = ");
	scanf("%d",&a);
	(a>=18)&&printf("Eligible");
	(a<18)&&printf("Not Eligible");	
	return 0;
}
