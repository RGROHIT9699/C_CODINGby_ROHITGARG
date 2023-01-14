#include<stdio.h>
int fabonacci_s(int);
int main(){
	int n;
	printf("How many no. do you want to print");
	scanf("%d",&n);
	fabonacci_s(n);
	return 0;
}
fabonacci_s(int n){
int a=0,b=1,c,d=0;
    while(d<n)
    {printf("%d ",a);
    c=a+b;
    a=b;
    b=c;
    d++;
    }
return (c);
}
