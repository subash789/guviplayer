#include <stdio.h>

int main()
{
    int n,i;
    char s[50];
    scanf("%s",s);
    n=strlen(a);
    for(i=n;i>=0;i--)
    {
     if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U')
     {
         printf("%c",s[i]);
     }
    }
    return 0;
}
