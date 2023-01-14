#include<stdio.h>
int main()
{
	int a[100],s,x,b,c,d,r[100],t[100],u=0,y=0;
	printf("array");
	scanf("%d",&c);
	for (d=0;d<c;d++)
	{
    	scanf("%d",&a[d]);
    }	
	for(d=0;d<c;d++)
	{
	if (a[d]%2==0)
    	{
    	    r[u]=a[d];
			u++;   	
		}
		else 
		{
			t[y]=a[d];
			y++;			
		}
	}
	printf("for even\n");
	for (s=0;s<u;s++)
	{
		printf(" %d ",r[s]);
	}
	printf("\nfor odd \n");
	for (x=0;x<y;x++)
	{
		printf(" %d ",t[x]);
	}
	return 0;
}
