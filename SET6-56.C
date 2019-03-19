#include <stdio.h>
#include<string.h>

int main()
{

char Str[100],K;
int i,l;
scanf("%s %c",Str,&K);
for(i=1;Str[i]!=NULL;i++)
{
    if(Str[i]==K)
    {
        printf("%d",i+1);
    }

  
}


    return 0;
}
