#include <stdio.h>
#include<string.h>
int main() 
{
	char s1[20],s2[20];
	int i,j,flag=0;
	scanf("%s %s",s1,s2);
	for(i=0;s1[i]!='\0';i++)
	{
		for(j=0;s2[j]!='\0';j++)
		{
			if(s1[i]==s2[j])
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
	if(flag==0)
	{
		printf("no");
	}
	return 0;
}
