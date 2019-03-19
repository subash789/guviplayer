#include <stdio.h>
int main()
{
   int N,s[10],i;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&s[i]);
   }
   
      for(i=0;i<N-1;i++)
   {
     if(s[i]<s[i+1])
      printf("%d ",s[i+1]);
      else 
        printf("%d ",s[i]);
     
   }
    return 0;
}
