#include <stdio.h>
void Even_Odd(int n)
{
    if (n%2==0)
        printf("Even");
    else
        printf("Odd");
}
int main() 
{
    int N;
    scanf("%d",&N);
    Even_Odd(N);
    return 0;
}