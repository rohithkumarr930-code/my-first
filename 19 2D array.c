#include <stdio.h>
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int count=0;
    for (int i=0;i<r;i++)
    {
        int row[c];
        int unique=1;

        for (int j=0;j<c;j++)
        {
            scanf("%d",&row[j]);
        }
        for (int j=0;j<c;j++)
        {
            for (int k=j+1;k<c;k++)
            {
                if (row[j]==row[k]) 
                {
                    unique=0;
                    break;
                }
            }
            if (!unique)
                break;
        }
        if (unique)
            count++;
    }
    printf("%d",count);
    return 0;
}