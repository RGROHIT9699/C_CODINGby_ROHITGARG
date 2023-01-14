#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int a[100],b[1000]={0},n,c,d;
	printf("Enter Array");
	scanf("%d",&n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&a[c]);
	}
	d=a[0];	
	for(c=0;c<n;c++)
	{
		if (d<a[c])
		{
			d=a[c];
		}
	}
	for(c=0;c<n;c++)
	{
		b[a[c]]++;
	}
	for(c=0;c<=d;c++)
	{
		if(b[c]>0)
		{
			printf("%d=%d\n",c,b[c]);
		}
	}
	return 0;
	getch();
}
