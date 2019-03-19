#include <stdio.h>
#include<string.h>

int main()
{
    	char s[10],b[10]="Answer",c[1000];
    	scanf("%s",s);
    	int i,j,l,k;
    	k=0;
    	for(i=0;s[i]!='\0';i++)
    	{
        c[k]=s[i];
         k++;
         }  

        for(j=0;b[j]!='\0';j++)
        {
         c[k]=b[j];
         k++;
         }

c[k]='\0';
printf("%s",c);
    return 0;
}
