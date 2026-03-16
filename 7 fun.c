#include <stdio.h>
void Prime(int n)
{
    int i,flag=0;
    if (n<=1)
    {
        printf("Not Prime");
        return;
    }
    for (i=2;i<=n/2;i++)
    {
        if (n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("Prime");
    else
        printf("Not Prime");
}
int main() 
{
    int N;
    scanf("%d",&N);
    Prime(N);
    return 0;
}