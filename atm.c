#include<stdio.h>
int main()
{
printf("ENTER AMT. IN MULTIPLE OF 100");
	int a,b,c,d;
	printf("\nEnter amount = ");
	scanf("%d",&a);
	b=a/2000;
	printf("\nNotes of 2000 = %d",b);
	d=a%2000;
	printf("\nNotes of 500 = %d",d/500);
	c=d%500;
	printf("\nNotes of 100 = %d",d/100);
	return 0;
}
