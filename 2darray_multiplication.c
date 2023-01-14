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
	int e;
	printf("Enter the no. for multiply: ");
	scanf("%d",&e);
	printf("SCALER MATRIX MULTIPLICATION IS:\n");
		for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			d=a[i][j]*e;
			printf("%d ",d);
		}
		printf("\n");
	}
	return 0;
}
