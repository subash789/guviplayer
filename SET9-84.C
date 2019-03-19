#include <stdio.h>
int main()
{
    int n,i,j,m=0,f;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			f=((a[i]) | (a[j]));
			if(f>m)
			{
				m=f;
			}
		}
	}
	printf("%d",m);
    return 0;
}
