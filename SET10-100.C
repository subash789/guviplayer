#include<stdio.h>
int main()
{
	long int s;
	int rem,sum,i=1;
	scanf("%ld",&s);
	while(s!=0)
	{
		rem=s%10;
		sum=sum+rem*i;
		i=i*2;
		s=s/10;
	}
	printf("%lx",sum);
        return 0;
}
