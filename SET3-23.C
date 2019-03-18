#include <stdio.h>

int main()
{
    int n,K,i,j,b,l=0;
scanf("%d %d",&n,&K);
int a[n+K];
for(i=0;i<n;i++)
{
     scanf("%d",&a[i]);
}
 
  for(i=n;i<n+K;i++)
{
  
    scanf("%d",&a[i]);
   l++;
      b=a[0];
   for(j=1;j<n+l;j++)
{
  if(b<a[j])
   b=a[j];
 }

printf("%d ",b);

}
return 0;
}
