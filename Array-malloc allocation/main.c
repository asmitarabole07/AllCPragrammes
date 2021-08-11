#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0;
    printf("Enter length of array\n");
    scanf("%d",&n);

    int* array=malloc(n*sizeof(int));

    printf("\nEnter elements in array\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }

    for(i=0;i<n;i++)
    {
        sum=sum+array[i];
    }

    printf("\nSum is %d",sum);



    return 0;
}
