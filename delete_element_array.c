#include <stdio.h>

int main() {
    int a[1000],i,n,nume,j=0,temp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&nume);
    for(i=1;i<n;i++){
        if (a[i]==nume){
            j=i;
        temp++;
    } }
    if (temp==1) {
        for(i=j;i<n-1;i++){
            a[i]=a[i+1];}
        for(i=0;i<n-1;i++){
            printf("%d ",a[i]);
        }
    }
    else {
        printf("Not found.");
    }   
    return 0;
}

