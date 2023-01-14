#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0,ij=0;
	char a[100],v[100];
	printf("enter the strings\n");
	
	scanf("%[^\n]s",a);

	scanf("\n%[^\n]s",v);
	
	for (i=0;a[i];i++)
	{
		j++;
	}
	for (i=0;v[i];i++)
	{
		ij++;
	}
	int k,temp;
	if (j==ij)
	{
		for(i=0;i<j-1;i++)
		{
			for(k=0;k<j-i-1;k++)
			{ if (a[k]>a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
			if (v[k]>v[k+1])
			{
				temp=v[k];
				v[k]=v[k+1];
				v[k+1]=temp;
			}
		    }
		}
//		puts(a);
//		puts(v);
		if (strcmp(a,v)==0)
		printf("yes");
	}
	else
	printf("NOT");
	return 0;
}
