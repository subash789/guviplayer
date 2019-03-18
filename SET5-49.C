#include<stdio.h>
#include<string.h>
int main()
{
int n;
scanf("%d",&n);
if(n>-32768 & n<32768)
{
  printf("\nINT");
}
else
{  
  printf("\nLONG");
}
return 0;
}
