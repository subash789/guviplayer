#include<stdio.h>
int main()
{
    char s[50];
    int i=0;
    scanf("%[^\n]s",s);
    printf("%c%c",s[i],s[i+3]);
    return 0;
}
