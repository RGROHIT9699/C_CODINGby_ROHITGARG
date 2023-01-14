#include<stdio.h>
int main() 
{
    int n,a,b,c,s=0;
    scanf("%d",&a);
    while(a>9)
	{	
	while(a>0)
    {
        b=a%10;
        s=s+b;
        a=a/10; 
    }
    a=s;
    s=0;
    }
    if(a==1)
    printf("magic");
    else
printf("not");
return 0;
}
