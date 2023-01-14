#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
    printf("ENTER THE NO.");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    e=a+b+c+d;
    f=410-e;
	if (e>=310)
	{if (f<39) 
	printf("you need only 40");
	else 
	printf("%d",f);
	}else 
	printf("you cant do");
	return 0;
}
