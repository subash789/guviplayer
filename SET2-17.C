#include<stdio.h>
int main() 
{
	int l,r,n,i;
	scanf("%d %d",&l,&r);
	if(l>r)
	{
		n=l;
	}
	else
	{
		n=r;
	}
	for(i=2;i<=n;i++)
	{
		if((i%l==0) && (i%r==0))
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
#include <stdio.h>

int main()
{
char ch[6]={'k','a','b','a','l','i'};
   char a[20][20];
   int i,j,k,c=0,n,t=0,l;

  scanf("%d",&n);
 
   for(i=0;i<n;i++)
   {
        scanf("%s",a[i]);
    }

  for(i=0;i<n;i++)
  {
      l=strlen(a[i]);
   
      
      for(j=0;j<l;j++)
      {
          for(k=0;k<6;k++)
          {
            if(a[i][j]==ch[k])
            {
              ++c;
          
              break;
            }
          }
      }
      
      if(c==l&& l==6)
      {
          t++;
            

      }
      c=0;
      l=0;
  }
  
  
  printf("%d",t);

   

    return 0;
}
