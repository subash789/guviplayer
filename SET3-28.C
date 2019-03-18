#include <stdio.h>
#include<string.h>

int main()
{
    
char S[10];
	int i,l;
	scanf("%[^\n]",S);
	l=strlen(S);
	for(i=0;i<l;i++)
	{
		if(S[i]==' ')
		{
			S[i]='*';
		}
	}
	for(i=0;i<l;i++)
	{
	if(S[i]!='*')
	{
	printf("%c",S[i]);
	}
	}
    return 0;
}
