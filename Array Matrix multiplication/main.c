#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,sum=0;
    int a[3][3];
    int b[3][3];
    int product[3][3];



    printf("\nEnter values in 3 X 3 matrix 1\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }


    printf("\nEnter values in 3 X 3 matrix 2\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

    printf("\nMatrix multiplication is\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
              for(k=0;k<3;k++)
              {
                  sum=sum+(a[i][k]*b[k][j]);
              }
              product[i][j]=sum;
              sum=0;
            }

        }

     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("%d ",product[i][j]);
         }
         printf("\n");
     }

    getch();
    return 0;
}
