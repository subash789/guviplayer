#include <stdio.h>

int main()
{
    int n,i,j,t=0;
scanf("%d",&n);
{
for(i=2;i<=n;i++)
{
  if(n%i==0)
    {
        
        
        for(j=2;j<=i/2;j++)
        {
            
            
            if(i%j==0)
            {
                
                t=1;
                break;
                
            }
        }
if(t==0)
     printf("%d ",i);
}}
}
    return 0;
}
