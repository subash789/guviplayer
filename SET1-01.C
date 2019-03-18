#include<stdio.h>
int main()
{
int k=0,i,c=0;
char a[1000],rev[1000];
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
c++;
}
k=0;
 for(i=c;i>=0;i--)
{
rev[k]=a[i];
k++;
}
rev[k]='\0';
for(i=0;i<=c;i++)
{
  printf("%c",rev[i]);
}
 
 return 0;
}
