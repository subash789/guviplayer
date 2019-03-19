#include<stdio.h>
int main()
{
    long int n,k,f1=1,f2=1,i;
    float t;
    scanf("%ld %ld",&n,&k);
    if(k<=n && k<=10)
    {
        for(i=1;i<=n;i++)
        {
            f1=f1*i;
        }
        for(i=1;i<=(n-k);i++)
        {
            f2=f2*i;
        }
        t=f1/f2;
        printf("%.0f",t);
        
    }
    return 0;
}
