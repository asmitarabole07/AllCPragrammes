#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,sumr=0;
    int array[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};

    printf("Row\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            sumr=sumr+array[i][j];
        }
        printf("%d ",sumr);
        sumr=0;

    }

    printf("\nColumn\n");
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            sumr+=array[i][j];
        }
        printf("%d ",sumr);
        sumr=0;

    }

    return 0;

}
