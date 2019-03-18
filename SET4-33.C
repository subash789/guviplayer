#include <stdio.h>

int main(void) 
{

{
    int s[100][100],i,j,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    scanf("%d",&s[i][j]);
    }
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    
    {
    if(s[i][j]==1)
    {
    if(s[i-1][j]==0&&s[i][j-1]==0&&s[i][j+1]==0&&s[i+1][j]==0)
    {
     c++;
    }
    }
    }
    }
    printf("%d",c);
    return 0;
}
