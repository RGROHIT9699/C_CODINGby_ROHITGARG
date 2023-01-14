#include<stdio.h>
int main()
{
	int n,i,j,k,z=1;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			printf(" ");			
		}
		for(k=1;k<=z;k++)
		{
			printf("*");
		}
		z=z+2;
		printf("\n");
	}
	return 0;
}
