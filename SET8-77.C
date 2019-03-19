#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,c=1;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<a[i+1])
		{
			c=c+1;
		}
		if(a[i]>a[i+1])
		{
			break;
		}
	}
	printf("%d",c);
	return 0;
}
