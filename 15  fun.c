#include <stdio.h>
void Table(int n) 
{
    for(int i=1;i<=10;i++)
    {
        printf("%d×%d=%d\n",n,i,n*i);
    }
}
int main() 
{
    int N;
    scanf("%d",&N);
    Table(N);
    return 0;
}