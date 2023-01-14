#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	printf("Enter the no. = ");
	scanf("%d",&x);
	printf("Enter the power of no. = ");
	scanf("%d",&y);
	printf("The result of this = %g", pow(x,y));
	return 0;
}
