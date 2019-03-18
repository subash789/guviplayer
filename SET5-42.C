#include <stdio.h>
#include<string.h>

int main()
{
    
char S1[10],S2[10];
int i,j,n,m,count=0;
scanf("%s %s",S1,S2);
n=strlen(S1);
m=strlen(S2);
for(i=n-m;i<l1;i++)
{
for(j=0;j<l2;j++)
{

        if(S1[i]==S2[j])
        {
            count++;
        }
}
}
if(count==l2)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
