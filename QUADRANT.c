#include<stdio.h>
int main()
{
	int x,y;
	printf("ENTER X-AXIS = ");
	scanf("%d",&x);
	printf("Enter Y-Axis = ");
	scanf("%d",&y);
	(x>0)&&(y>0)?printf("FIRST QUADRANT"):(x<0)&&(y>0)?printf("SECOND QUAD."):(x<0)&&(y<0)?printf("THIRD QUAD."):
	(x>0)&&(y<0)?printf("FORTH QUAD."):printf("ORIGIN");
	return 0;
}
