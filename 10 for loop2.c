#include<stdio.h>
int main()
{
    int N;
    int data;
    int totaldata=0;
    int high_data=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&data);
        totaldata+=data;
    if(data>2)
    {
        high_data++;
    }
    }
    printf("Total data:%d\n",totaldata);
    printf("High usage days:%d",high_data);
    return 0;
}