#include <math.h>
#include <stdio.h>
#include <string.h>
int main() 
{
    int n,mn,d=1,mx,a,i=1,p,q=1;
    scanf("%d",&p);
    while (p>=q)
    {
        scanf("%d",&n);
        while (n>=d)
        {
           scanf("%d",&a);
           if (i==1)
           {
               mn=a;
               mx=a;
               i++;
           }
            if (a>mx)
           {
               mx=a;
           }
            if (a<mn)
           {
               mn=a;
           }
           d++;
       }
       printf("Min=%d ",mn);
       printf("Max=%d\n",mx);
       q++;
       --i;
    }
    return 0;
}
