#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,temp,a;
    printf("Enter length of array\n");
    scanf("%d",&n);

    int array[n];

    printf("\nEnter elements in array\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element %d\n",i+1);
        scanf("%d",&array[i]);
    }

    a=array[0];



    for(i=0;i<n-1;i++)
    {
        temp=array[i+1];
        array[i+1]=array[i];
        array[i]=temp;
    }

    array[n]=a;

    printf("\nArray after sorting is\n");
    for(i=0;i<n;i++)
    {
        printf("%d",array[i]);

    }



    return 0;
}
