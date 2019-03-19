#include <stdio.h>
int main() 
{
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n],i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int c=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c=c+1;
			}
		}
		if(c==k)
		{
			printf("%d",a[i]);
			break;
			
		}
	}
	return 0;
}
