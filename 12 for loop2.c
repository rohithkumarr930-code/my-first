#include<stdio.h>
int main()
{
    int N;
    int price;
    int Highest_price=0;
    int Highestprice_days=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&price);
        if(price>Highest_price)
        {
            Highest_price=price;
        }
        
        if(price>100)
        {
            Highestprice_days++;
        }
    }
    printf("Highest price:%d\n",Highest_price);
    printf("High price days:%d\n",Highestprice_days);
    
}