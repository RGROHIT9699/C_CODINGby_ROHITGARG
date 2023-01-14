#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("No. of times using ");
    scanf("%d",&a);
    int n=1;
    while (n<=a)
    {
        scanf("%d %d %d",&b,&c,&d);
      if (b+c+d == 180 && a > 0 && b > 0 && c > 0)
          printf("Yes\n");
        else 
            printf("No\n");
        n++;
    } 

    return 0;
}

