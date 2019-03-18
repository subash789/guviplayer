#include <stdio.h>
int main()
{
    int s1,b1,s2,b2,s3,b3;
    scanf("%d %d",&s1,&b1);
     scanf("%d %d",&s2,&b2);
      scanf("%d %d",&s3,&b3);
      
      if((s1=0 &&s2==0 &&s3==0) ||(b1==0&& b2==0 && b3==0))
      {
          printf("yes");
      }
      else
      {
          printf("no");
      }
    return 0;
}
