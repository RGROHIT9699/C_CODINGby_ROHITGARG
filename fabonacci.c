#include<stdio.h>
int main() 
{
int a=0,b=1,c,n,d=0;
    scanf("%d",&n);
    while(d<n)
    {printf("%d ",a);
    c=a+b;
    a=b;
    b=c;
    d++;
    }
return 0;
}
