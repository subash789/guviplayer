  #include <stdio.h>

int main()
{
    int N,r,i,s[10],j,k,c=0;
    scanf("%d",&N);
    while(N)
    {
        
        r=N%10;
        s[k]=r;
        N=N/10;
        k++;

    }
    
    
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]==s[j])
            {
                
                c++;
            }
            
        }
        
                
   }
    
    
    if(c!=0)
    printf("yes");
    else
    printf("no");
 return 0;   
}
