#include<stdio.h>
int main()
{
    long int s,dec=0,rem,p=1;
    scanf("%ld",&s);
    while(s>0)
    {
        rem=s%10;
        dec=dec+rem*p;
        p=p*2;
        s=s/10;
    }
    printf("%ld",dec);
    return 0;
}
