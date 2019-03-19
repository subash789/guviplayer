#include <stdio.h>
int main(void) {
	int n,i,j,s1[10],s2[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s1[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&s2[i]);
	}
	for(i=0;i<n;i++)
	{
        for(j=0;j<n;j++)
           {
		if(s1[i]==s2[j])
		{
			printf("%d ",s1[i]);
		}
            }
	}

	return 0;
}
