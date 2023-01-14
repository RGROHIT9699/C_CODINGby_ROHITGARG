#include<stdio.h>
//wap sring from user total no. of alphabets 
int main()
{
	char abs[100];
	int i,count=0,coun=0,cou=0,co=0;
	scanf("%[^\n]s",abs);
//	printf("%s",abs);
    for (i=0;abs[i];i++)
    {
    	if (abs[i]>=65 && abs[i]<=90 || abs[i]>=97 && abs[i]<=122)
    	{count ++;}
    	else if (abs[i]>=48 && abs[i]<=57)
    	{coun ++;}
		else if (abs[i]==32)
		{cou ++;}
		else
		{co++;}
	}
	printf("%d\n%d\n%d\n%d",count,coun,cou,co);
	return 0;
}
