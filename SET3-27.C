#include <stdio.h>

int main()
{
  char s[50];
  int i,j,k,l;
 scanf("%[^\n]s",s);
  for(i=0;s[i]!='\0';i++)
  {
      if(s[i]==' ' && s[i+1]==' ')
      {
         k=i+2;
         j=i;
         for(l=k;s[l]!='\0';l++)
         {
             s[j]=s[l];
             j++;
         }
         s[j]='\0';
         break;
      }
  }
  printf("%s",s);
  return 0;
  
}
