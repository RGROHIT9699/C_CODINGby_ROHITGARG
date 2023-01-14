#include<stdio.h>
int main()
{ 
    int l;
    printf("Enter No. to Convert = ");
    scanf("%d",&l);
    printf("\nThe Length in m is: %f m",l/100.0);
    printf("\nThe Length in km is: %f km",l/100000.0);
    return 0;
}
