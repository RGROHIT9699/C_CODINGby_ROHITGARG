#include <stdio.h>
int main() {
    int si,p,r,t,a;
    scanf("%d %d %d",&p,&r,&t);
    si=p*r*t/100;
    a=p+si;
    printf("%d",a);
    return 0;
}

