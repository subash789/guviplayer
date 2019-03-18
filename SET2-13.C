#include <stdio.h>

int main()
{
    int s,n,r,m=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=r*r;
        m=m+s;
        n=n/10;
    }
    printf("%d",m);
    return 0;
}
