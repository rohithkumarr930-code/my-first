#include <stdio.h>
int largest(int a,int b) 
{
    if (a>b)
        return a;
    else
        return b;
}
int main() 
{
    int A,B;
    scanf("%d %d",&A,&B);
    printf("%d",largest(A,B));
    return 0;
}