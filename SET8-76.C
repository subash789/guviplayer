#include <stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	int a[n],i,ce=0,co=0,t1,t2;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			ce=ce+1;
			t1=a[i];
		}
		else
		{
			co=co+1;
			t2=a[i];
		}
	}
	if(ce==1)
	{
		printf("%d",t1);
	}
	else
	{
		printf("%d",t2);
	}
	return 0;
}
