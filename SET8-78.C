#include <stdio.h>
int main()
{
    int M,s1[10],i,d=0,r,j,t=0;
    scanf("%d",&M);
    for(i=0;i<M;i++)
    {
        scanf("%d",&s1[i]);
    }
    for(i=0;i<M;i++)
    {
        for(j=i+1;j<M;j++)
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
