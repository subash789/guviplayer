#include <stdio.h>
int main(void) 
{
	int n,a,c=0,rem;
	scanf("%d %d",&n,&a);
	while(n!=0)
	{
		rem=n%10;
		if(rem==a)
		{
			c=c+1;
		}
		n=n/10;
	}
	printf("%d",c);
	return 0;
}
