#include<stdio.h>

void is_perfect(int );
int main(){
	int n;
	printf("enter the number to be check");
	scanf("%d",&n);
	is_perfect(n);
	
}
void is_perfect(int p){
	int i,fac=0;
	for(i=1;i<p;i++){
		if(p%i==0)
		{
			fac=fac+i;
			
		}
	}
	if(fac==p)
	printf("no is perfect");
	else
	printf("no is not perfect");
}
