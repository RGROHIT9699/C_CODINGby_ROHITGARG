#include<stdio.h>
int main()
{
    int a,b,c=0,d,e,f;
    scanf("%d",&e);
    while(e>0){   
    scanf("%d",&a);
    while (a>0)
    {
        b=a%10;
        d=b+d;
        a=a/10;
    }
    printf("%d\n",d);
    d=0;
    e--;
	}
	return 0;
}
