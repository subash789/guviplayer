#include<stdio.h>
int main()
{
    int n,i,j,s[100],k;
    scanf("%d",&n);
   
    scanf("%d",&k);
       {
        for(i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
    
        }
        for(i=1;i<k;i++)
        {
        
            for(j=0;j<n;j++)
            
            {
            
                if(i==s[j])
                
                {
                
                    printf("%d ",i);
                }
                
                
            }
            
        }
    
    }
    return 0;
}
