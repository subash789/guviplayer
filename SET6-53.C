#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
char s[10];
int l,n=0,i,j;
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
  n=n+1;
}
printf("%d",n);
return 0;
}
