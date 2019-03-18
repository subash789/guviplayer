#include <stdio.h>

int main(void) 
{
	int l,i,j,m=1,flag=0;
	scanf("%d",&l);
	for(i=0;i<l;i++)
	{
		for(j=i;j>0;j--)
		{
			m=m*2;
			if(m==l)
			{
				flag=1;
				break;
			}
			
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
