#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],s2[100];
	int i,n,m,c=0;
	scanf("%s",&s);
	scanf("%s",&s2);
	n=strlen(s);
	m=strlen(s2);
	if(m!=n)
	{
		printf("no");
	}
	else
	{
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==s2[i])
		{
			c+=1;
		}
	}
	if(c==n)
	{
		printf("yes");
	}
}
return 0;
}
