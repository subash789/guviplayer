#include <stdio.h>
int main()
{
    	int n,x, i,j,f=0;;
	scanf("%d %d",&n,&x);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==X)
			{
				
				f=1;
				break;
			}
			
		}
	}
	if(f==1)
	{
			printf("yes");
	}
	else
	printf("no");

    return 0;
}
