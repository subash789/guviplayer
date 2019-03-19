#include <stdio.h>

int main()
{
    
    char Str1[10],Str2[10];
    int c1=0,c2=0,i,count=0;
    scanf("%s %s",Str1,Str2);
    for(i=0;Str1[i]!=NULL;i++)
    {
        c1++;
    }
    for(i=0;Str2[i]!=NULL;i++)
    {
        c2++;
    }
    if(c1==c2)
    {
    for(i=0;i<c1;i++)
    {
        if(Str1[i]==Str2[i] || Str1[i]+32==Str2[i] ||Str1[i]-32==Str2[i] || Str1[i]==Str2[i]+32 ||Str1[i]==Str2[i]-32)
        {
            count++;
        }
    }
    if(count==c1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    }
    else
    {
        printf("no");
    }
    return 0;
}
