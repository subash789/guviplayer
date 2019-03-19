#include <stdio.h>
int main()
{
	int n,rem,a[20],i,c=0,s;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		a[i]=rem;
		i++;
		c=c+1;
		n=n/10;
	}
	s=a[0]+a[c-1];
	printf("%d",s);
	return 0;
}
