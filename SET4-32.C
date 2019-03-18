#include <stdio.h>

int main(void) 
{
    int n,a[50],i,m,flag=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
	return 0;
}
