#include<stdio.h>
int main()
{
char str[1000],ch;
int count=0;
printf("Enter a string:");
// fgets(str,sizeof(str),stdin);
scanf("%[^\n]s",str);
printf("Enter a character to find its frequency:");
scanf("\n%c",&ch);
int i;
for(i=0;str[i];i++){
    if(ch==str[i])
    count++;
} 
    printf("frequency of %c=%d",ch,count);
    return 0;
}
