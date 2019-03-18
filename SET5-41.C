#include <stdio.h>
int main()
{
    int n,k,i,f=0,x=1;
	scanf("%d %d",&n,&k);

	for(i=0;i<n;i++)
	{
		x=k*x;
		if(x==n)
		{
			f=1;
		 break;
		}
	}
	if(f==0)
	printf("no");
	else
		printf("yes");
    return 0;
}
