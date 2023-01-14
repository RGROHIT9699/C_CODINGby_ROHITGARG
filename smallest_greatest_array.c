#include <stdio.h>
int main() {
    int a[1000],i,min,max,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++){
        if (a[i]>max)
            max=a[i];
        if (a[i]<min)
            min=a[i];
    }
    printf("%d\n%d",min,max);
	return 0;
}

