#include<stdio.h>
#include<string.h>
int main()
{
	char ab[100],abs[100],temp;
	scanf("%[^\n]s",abs);
	int count=0,i,ac,j=1;
	for (i=0;abs[i];i++)
	{
		ab[i]=abs[i];
	}
	for(i=0;abs[i];i++)
	{count++;
	}
	ac=count/2;
	for(i=0;i<ac;i++)
	{
		temp=abs[i];
		abs[i]=abs[count-j];
		abs[count-j]=temp;
		j++;
	}
//	printf("%s",abs);
//	printf("\n%s",ab);
	if (strcmp(abs,ab)==0)
	{
		printf("p");
	}
	else
	printf("n");
	
	return 0;
}

