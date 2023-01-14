#include <stdio.h>
int main() {    
    int p,r;
    float ci;
    scanf("%d %d",&p,&r);
    ci=(p*(1+r/100.0)*(1+r/100.0))-p;
    printf("%.2f",ci);
    return 0;
}

