#include <stdio.h>

int main() {
   int capacity,N;
   int items,i;
   int overflowcount=0;
   scanf("%d",&capacity);
   scanf("%d",&N);
   
   for(i=0;i<N;i++)
   {
       scanf("%d",&items);
       capacity-=items;
       
       if(capacity<0)
       {
           overflowcount++;
       }
   }
   printf("Remaining Capacity:%d\n",capacity);
   printf("Overflow Days:%d",overflowcount);
    return 0;
}