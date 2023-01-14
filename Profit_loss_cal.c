#include <stdio.h>

int main() 
{ int c,s;
 float p,l;
            printf("ENTER THE COST PRICE : ");
            scanf("%d",&c);
            printf("ENTER THE SELLING PRICE : ");
            scanf("%d",&s);
            p=((s-c)*100.0)/c;
            l=((c-s)*100.0)/c;
            if (s>c)
                printf("PROFIT\n%.2f%%",p);
            else 
                printf("LOSS\n%.2f%%",l);  
    return 0;
}
