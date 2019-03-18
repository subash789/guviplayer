#include <stdio.h>

int main(void) 
{
	char s[20];
	int i,c=0;
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
	    if(s[i]=='(')
	    {
	        c++;
	    }
	    if(s[i]==')')
	    {
	        c--;
	    }
	}
	if(c==0)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}
	return 0;
}
