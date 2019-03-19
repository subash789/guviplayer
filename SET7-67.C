#include <stdio.h>
int main()
{
    int n,i,c=1;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  c*=i;   
 }
 printf("%d",c);
    return 0;
}
