#include <stdio.h>

int main()
{
  char ss[50];
  int i,j,k,l;
 scanf("%[^\n]s",ss);
  for(i=0;ss[i]!='\0';i++)
  {
      if(ss[i]==' ' && ss[i+1]==' ')
      {
         k=i+2;
         j=i;
         for(l=k;ss[l]!='\0';l++)
         {
             ss[j]=ss[l];
             j++;
         }
         ss[j]='\0';
         break;
      }
  }
  printf("%s",ss);
  return 0;
  
}
