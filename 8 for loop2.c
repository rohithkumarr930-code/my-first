#include<stdio.h>
int main()
{
    int N;
    int loss;
    int total_loss=0;
    int highloss=0;
    scanf("%d",&N);
    for (int i=0;i<N;i++)
    {
        scanf("%d",&loss);
        total_loss+=loss;
    
        if(loss>100)
        {
           highloss++;
        
        }
    }
        printf("Total loss:%d\n",total_loss);
        printf("Highloss:%d",highloss);
        return 0;
}