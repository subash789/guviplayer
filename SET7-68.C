#include <stdio.h>
int main() 
{
	int n;
	scanf("%d",&n);
	int a[n],i,j,t=0;
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
		if(a[i]!=a[j])
		{
			break;
		}
	}
		if(c>t)
		{
			t=c;
		}
	}
	printf("%d",t);
	return 0;
}
