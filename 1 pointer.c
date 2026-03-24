#include<stdio.h>
void swap(int *a,int *b)
{ 
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int c;
    int d;
    scanf("%d\n",&c);
    scanf("%d",&d);
    printf("%d %d\n",c,d);
    swap(&c,&d);
    printf("%d %d",c,d);
}