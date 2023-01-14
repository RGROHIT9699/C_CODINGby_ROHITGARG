#include <stdio.h>

int main()
{
printf("ALL ARITHMETIC OPERATIONS\n");
int a,b,c;
printf("Enter no. 1 = ");
scanf("%d",&a);
printf("Enter no. 2 = ");
scanf("%d",&b);
c=a+b;
printf("The SUM is: %d",c);
c=a-b;
printf("\nThe SUBTRACT is: %d",c);
c=a*b;
printf("\nThe MULTIPLY is: %d",c);
c=a/b;
printf("\nThe DIVIDE is: %d",c);
c=a%b;
printf("\nRemainder after Division is: %d",c);
return 0;
}
