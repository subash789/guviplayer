#include <stdio.h>
int main()
{
    int n,i,j,f=0;
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
	{
		f=f^s[i];
	}
	printf("%d",f);

    return 0;
}
