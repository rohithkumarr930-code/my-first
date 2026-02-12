#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d=a+b+c;
    if(d==180)
    {
        printf("valid triangle");
    }
    else
    {
        printf("not valid triangle");
    }
    return 0;
}