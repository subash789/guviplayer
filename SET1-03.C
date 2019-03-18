#include<stdio.h>
int main()
{
int ss=0,n,i,r;
scanf("%d",&n);
while(n!=0)
{
    r=n%10;
    ss=ss*10+r;
    n=n/10;
}
printf("%d",ss);
 return 0;
}
