#include <stdio.h>
int main()
{
    int n,i,j,f;
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			f=((s[i]) | (s[j]));
		}
	}
	printf("%d",f);
    return 0;
}
