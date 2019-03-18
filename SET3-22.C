#include <stdio.h>

int main()
{

 int n,K,m,GR=1,i;
    scanf("%d %d",&n,&K);
    m = ((n<K) ? n : K);

    for(i=1; i<=m; i++)
    {
    
        if(n%i==0 && K%i==0)
        {
            GR = i;
        }
    }

    printf("%d",GR);

return 0;
}
