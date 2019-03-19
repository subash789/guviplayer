#include <stdio.h>
int main()
{
char Str[100],k;
	scanf("%s %c",Str,&k);
	int i,c=0;
	for(i=0;Str[i]!='\0';i++)
	{
		if(Str[i]==k)
		{
			c+=1;
		}
	}
	printf("%d",c);
    return 0;
}
