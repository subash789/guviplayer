#include<stdio.h>
#include<string.h>
int main()
{
char s[100][200],a[100];
int i,m,j;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%s",s[i]);
    }
     for(i=0;i<m;i++)
     {
          for(j=0;j<m;j++)
          {
         if(strlen(s[i])<strlen(s[j]))
          {
              strcpy(a,s[i]);
              strcpy(s[i],s[j]);
              strcpy(s[j],a);
          }
     }
     }
     for(i=1;i<=m;i++)
     {
         printf("%s\n",s[i-1]);
     }
     return 0;
}
