#include<stdio.h>
int main()
{
    int e,y,w,q,a;
    printf("Enter no. of days = ");
    scanf("%d",&e);
    printf("No. of Years =%d",e/365);
    q=e%365;
    printf("\nNo. of weaks = %d",q/7);
    a=q%7;
    printf("\nNo. of days = %d",a);
    return 0;
}
