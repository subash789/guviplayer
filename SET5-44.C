#include<stdio.h>
#include<string.h>
int main()
{
int n,i,s,k;
char str1[100];
scanf("%s",&str1);
scanf("%d",&n);
k=strlen(str1);
s=n%k;
for(i=s;str[i]!='\0';i++)
{
printf("%c",str[i]);
}
for(i=0;i<s;i++)
{
printf("%c",str[i]);
}
return 0;
}
