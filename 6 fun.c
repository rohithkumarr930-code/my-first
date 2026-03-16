#include <stdio.h>
int factor(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int N;
    scanf("%d",&N);
    printf("%d",factor(N));
    return 0;
}