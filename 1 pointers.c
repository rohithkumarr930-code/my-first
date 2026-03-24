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
    int c=90;
    int d=56;
    printf("%d %d\n",c,d);
    swap(&c,&d);
    printf("%d %d",c,d);
}