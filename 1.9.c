#include <stdio.h>
int main()
{float f,c;
char ch=248;
printf("Temperature in %cFahrenheit is ",ch);
    scanf("%f",&f);
c=(f-32)*0.56;
printf("\nTemperature in Celcius is %g%cC",c,ch);
return 0;
 } 
