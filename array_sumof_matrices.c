#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],n,i,j,d;
	printf("Enter No: ");
	scanf("%d",&n);
	printf("for matrice A \n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nfor matrices B \n");
		for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("SUM IS:\n");
		for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			d=a[i][j]+b[i][j];
			printf("%d ",d);
		}
		printf("\n");
	}
	printf("SUBTRACT IS:\n");
		for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			d=a[i][j]-b[i][j];
			printf("%d ",d);
		}
		printf("\n");
	}
	return 0;
}

