#include <stdio.h>
int main()
{
	int n,k,res=1,d=1,a,i;
	scanf("%d %d",&n,&k);
	if(n>=k)
	{
	for(i=1;i<=k;i++)
	{
	    res=res*n;
	    d=d*i;
	    n--;
	}
	a=res/d;
	printf("%d",a);
	}
	else
	{
	    
	}
	return 0;
}
