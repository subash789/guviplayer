#include <stdio.h>
int main()
{
    int n,s1[10],i,d=0,r,j,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s1[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s1[i]>s1[j])
            {
             d=s1[i]-s1[j];
            }
            else
            {
                d=s1[j]-s1[i];
            }
            if(d>t)
            {
                t=d;
            }
        }
    }
        printf("%d",t);
return 0;
}
