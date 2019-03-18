#include<stdio.h>
int main()
{
 char s1[50],s2[50];
 int num,i,count;
 scanf("%s",s1);
 scanf("%s",s2);
 scanf("%d",&num);
 count=0;
 for(i=0;s1[i]!='\0';i++)
 {
  if(s1[i]!=s2[i])
  {
   count++;
  }
 }
 if(count==num)
 {
  printf("yes");
 }
 else
 {
  printf("no");
 }
 return 0;
}
