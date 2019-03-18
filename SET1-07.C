#include <stdio.h>
#include<string.h>
int main(void)
{
	char string[10];
	int i,t,m;
	gets(string);
	m=strlen(string);
	if(m%2==0)
	{
		for(i=0;i<n;i+=2)
		{
			t=string[i]
			string[i]=string[i+1];
			string[i+1]=t;
		}
		puts(string);
	}
	else
	{
		for(i=0;i<n-1;i+=2)
		{
			t=string[i];
			string[i]=string[i+1];
			string[i+1]=t;
		}
		puts(string);
	}
return 0;
}
