#include <stdio.h>
int main() {
    int a[1000],n,t,min,i,j,mi=0,ma=0;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&t);
        for(i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
            min=0;
            ma=a[0];
            mi=a[0];
        }
        for(i=0;i<t;i++){
            if (a[i]>ma)
                ma=a[i];
            if (a[i]<mi)
                mi=a[i];            
        }
        min=ma-mi;
        printf("%d\n",min);
    }
    return 0;
}
