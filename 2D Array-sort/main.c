#include <stdio.h>
#include <stdlib.h>



void main()
{

    int i, j, k, a, m, n;

    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &n);

     int array[m][n];

    printf("Enter values of the matrix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);

        }
    }
    printf("The given matrix is \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
                printf(" %d", array[i][j]);
        }
        printf("\n");
    }
    printf("After arranging rows in ascending order\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            for (k =(j + 1); k < n; ++k)
            {
                if (array[i][j] > array[i][k])
                {
                    a = array[i][j];
                    array[i][j] = array[i][k];
                    array[i][k] = a;
                }
            }
        }
    }
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }

    printf("After arranging columns in ascending order\n");
    for (j = 0; j < n; ++j)
    {
        for (i = 0; i < m; ++i)
        {
            for (k =(i + 1); k < m; ++k)
            {
                if (array[i][j] > array[i][k])
                {
                    a = array[i][j];
                    array[i][j] = array[i][k];
                    array[i][k] = a;
                }
            }
        }
    }
    for (j = 0; j < n; ++j)
    {
        for (i = 0; i < m; ++i)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }





    return 0;
}
