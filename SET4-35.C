#include<stdio.h>
int main()
{
    char s[50];
    int i=0;
    scanf("%[^\n]s",s);
    printf("%c%c",s[i],s[i+3]);
    return 0;
}
///////////////////////////////////////////////////5
#include <stdio.h>

int main()
{
char s[100000];
 int i,j,count=0;
 scanf("%[^\n]s",s);
 for(i=0;s[i]!='\0';i++)
 {count=0;
    for(j=i+1;s[j]!='\0';j++)
    {
        if(s[i]!='#'&&s[i]!='#')
        {
        if(s[i]==s[j])
        {
           count++;
           s[j]='#';
            
        }
    }}
     
     if(count==0&&s[i]!='#')
    {
     printf("%c ",s[i]);
    }
 }
return 0; 
}
