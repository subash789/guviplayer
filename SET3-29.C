#include <stdio.h>
int main()
{
    int n1,n2,i,j,k,c=0;
 scanf("%d %d",&N1,&N2);
 for(i=n1;i<=n2;i++)
 {
  for(j=1;j<=i/2;j++)
  {
   k=j*j;
   if(k==i)
   {
    c++;
   }
  }
 }
 printf("%d",c);
    return 0;
}
