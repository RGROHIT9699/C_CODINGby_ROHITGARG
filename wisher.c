#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	if (a>=4	&& a<12)
	   printf("GOOD MORNING");
	else if (a>=12 && a<16)
	   printf("GOOD AFTERNOON");
	else if (a>=16 && a<21)
	   printf("GOOD EVENING");
	else 
	printf("GOOD NIGHT");	
	return 0;
}
