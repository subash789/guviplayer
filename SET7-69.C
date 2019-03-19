#include <stdio.h>
int main()
{
    	int n,k, i,j,f=0;
	scanf("%d %d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-k;i++)
	{
			printf("%d ",a[i]);
	}


    return 0;
}
