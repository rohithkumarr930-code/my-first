#include<stdio.h>
int main()
{
    int binary,decimal=0,base=1,digit;
    scanf("%d",&binary);
    for(; binary>0;binary=binary/10)
    {
        digit=binary%10;
        decimal=decimal+digit*base;
        base=base*2;
    }
    printf("%d",decimal);
    return 0;
}