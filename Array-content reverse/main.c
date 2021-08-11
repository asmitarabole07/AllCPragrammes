#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,temp;
    printf("Enter length of array\n");
    scanf("%d",&n);

    int array[n];

    printf("Enter elements in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

   for(i=0;i<n/2;i++)
    {
       temp=array[i];
       array[i]=array[n-1-i];
       array[n-1-i]=temp;

    }

    printf("Array in reverse is\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }

    getch();
    return 0;
}
