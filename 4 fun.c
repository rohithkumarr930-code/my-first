#include <stdio.h>
float circleArea(int r) 
{
    float area;
    area=3.14*r*r;
    return area;
}
int main()
{
    int R;
    float result;
    scanf("%d",&R);
    result=circleArea(R);
    printf("%.2f",result);
    return 0;
}