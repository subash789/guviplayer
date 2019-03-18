#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	if(n<=3)
	{
		printf("no");
	}
	else
	{
	for(i=3;i<n;i++)
	{
		if(n%i==0)
		{
			printf("%d ",i);
		}
	}
return 0;
}
