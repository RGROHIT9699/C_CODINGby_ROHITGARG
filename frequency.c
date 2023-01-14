#include<stdio.h>
int main()
{
	int a[100],s,d,f,g,h=0,j,i;
	printf("ENTER ARRAY: ");
	scanf("%d",&s);
	for(d=0;d<s;d++)
	{
		scanf("%d",&a[d]);
	}
	printf("\n Enter the No: ");
	scanf("%d",&g);
	for(f=0;f<s;f++)
	{
		if (a[f]==g)
		{
			h=h+1;
		}	
	}
	printf("frequency of %d is %d",g,h);
	return 0;
}
