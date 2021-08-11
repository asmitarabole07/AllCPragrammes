#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;

    printf("Enter size of square matrix\n");
    scanf("%d",&n);

    int array1[n][n];
    int array2[n][n];
    int sum[n][n];

    printf("\nEnter elements in Array-1\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&array1[i][j]);
    }

     printf("\nEnter elements in Array-2\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&array2[i][j]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            sum[i][j]=array1[i][j]+array2[i][j];
    }

    printf("\nSum Array is\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d ",sum[i][j]);
        }
        printf("\n");
    }






    return 0;
}
