#include <stdio.h>
int main()
{
	int n,i,rem,a[20],c=0;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%2;
		a[i]=rem;
		i++;
		c=c+1;
		n=n/2;
	}
	for(i=c-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	
	return 0;
}
