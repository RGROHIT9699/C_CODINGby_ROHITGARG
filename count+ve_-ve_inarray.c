#include<stdio.h>
int main()
{
	int i,a[100],p=0,z=0,n=0;
	
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
//	}
//	for(i=0;i<10;i++){
		if (a[i]>0)
		p++;
		else if (a[i]<0)
		n++;
		else
		z++;
	}
	printf("p=%d\nn=%d\nz=%d",p,n,z);
	return 0;
}
