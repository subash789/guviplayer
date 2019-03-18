#include<stdio.h>
int main()
{
 char s[50],s1;
 int num,i;
 scanf("%s",s);
 for(i=0;s[i]!='\0';i++)
 {
  num=s[i];
  if(num>=88 && num<=90 || num>=120 && num<=122)
  {
   num=num-23;
   s1=num;
  }
  else
  {
  s1=num+3;
  }
  s[i]=s1;
 }
 printf("%s",s);
return 0;
}



