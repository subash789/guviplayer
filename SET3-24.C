#include <stdio.h>

int main()
{
    char s[50];
    int i,flag=0;
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {
      if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
      {
          flag=1;
      }
    }
    if(flag==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
