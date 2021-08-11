#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,i,j;


    printf("Enter number of rows in 2D array\n");
    scanf("%d",&r);

    printf("Enter number of columns in 2D array\n");
    scanf("%d",&c);

    int array [r][c];

    printf("you can store %d values in array\n\n\n",r*c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter value at %d%d\n",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter value at %d%d\ is %d\n",i,j,array[i][j]);
        }

    }


    return 0;
}
