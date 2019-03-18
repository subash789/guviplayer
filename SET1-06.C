#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str1[50],str2[50];
	int i,j,x=1,u,v;
	scanf("%s %s",str1,str2);
	int n=strlen(str1);
	int m=strlen(str2);
	if(n==m)
	{
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<m;j++)
		{
			u=str1[i]-str1[j];
			v=str2[i]-str2[j];
			if(u==v)
			{
				x=0;
			}
			else
			{
				x=1;
				break;
			}
		}
	}
	}
	else
	{
		printf("\nno");
	}
	if(x==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}

return 0;
}
