#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter The 1st Angle  in Degree = ");
	scanf("%d",&a);
	printf("Enter The 2nd Angle in Degree = ");
	scanf("%d",&b);
	printf("The Third Angle is = %d",180-(a+b));
	return 0;
}
