#include <stdio.h>
int main()
{
	int i,p,k,x;
s	char s[30];
	scanf("%s %d %d",s,&p,&k);
	for(i=0;s[i]!='\0';i++)
	{
		if(i==p-1)
		{
			x=p-1;
			printf("%c",s[x+k]);
		}
	}
	return 0;
}
