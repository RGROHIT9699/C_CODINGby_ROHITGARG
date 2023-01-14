#include <stdio.h>
int main() {
     int a,b=4,d=0;
    scanf("%d",&a);
    while(b<=a)
    {    
       if (b%4 ==0 && b%100!=0 || b%400 ==0)
        printf("%d ",b);
        b=b+4;         
    }
    return 0;
}

