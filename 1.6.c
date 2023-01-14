#include <stdio.h>
#define PI 22/7.0

int main()
{int r, c;
printf("The Radius of Circle is = ");
scanf("%d",&r);
printf("\nThe Diameter of Circle is: %d cm",2*r);
printf("\nThe Circumference of Circle is: %g cm",2*PI*r);
printf("\nThe Area of Circle is: %g cm sq.",r*r*PI);
return 0;
}
