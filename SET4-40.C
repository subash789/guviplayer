include<stdio.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=n;j>=0;j--)
        {
            if((i*1)+(j*2)==n)
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}
