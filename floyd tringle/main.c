#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,i,j,n;

    printf("Enter number of rows\n\n\n");
    scanf("%d",&r);

    n=1;

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
           {

            printf("%d\t",n);
            n++;

            }
    printf("\n");
    }
    return 0;
}
