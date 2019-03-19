#include<stdio.h>
int main()
{
    long int n,s[10],i,j,d,t;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           
           if(s[i]>s[j])
           {
               t=s[i];
               s[i]=s[j];
               s[j]=t;
           }
        }
    }
        d=s[1]-s[0];
        printf("%ld",d);
    
    return 0;
}
