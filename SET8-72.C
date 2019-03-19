#include <stdio.h>
int main()
{
   int N,s[10],i,m;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&s[i]);
   }
   
      for(i=0;i<N;i++)
   {
     if(s[i]>s[i+1])
        m=s[i]; 
   }
    printf("%d ",m);
    return 0;
}
