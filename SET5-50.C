#include <stdio.h>
#include<string.h>

int main(void) {
 int s,b=0,i,j;
 scanf("%d",&s);
 for(i=2;i<s;i++)
 {
   if(s%i==0)
   {
     printf("yes");
     b=1;
     break;
   }
 }
   if(b==0)
   {
     printf("no");
   }
 
  return 0;
}
