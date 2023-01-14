#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c=0,d=0,e,f;
    scanf("%d",&a);
    while (a>0)
    {
        b=a%10;
        d=b+d;
        a=a/10;
    }
    printf("%d\n",d);
    getch();
	return 0;
}
