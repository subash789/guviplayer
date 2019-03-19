#include<string.h>
int main()
{
    char s[10];
    int i,l,c=0,k;
    scanf("%s",&s);
    scanf("%d",&k);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
     if(s[i]>=0 && s[i]<=k)
            {
                c++;
            }
    }
    printf("%d",c);
    if(l==c)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
