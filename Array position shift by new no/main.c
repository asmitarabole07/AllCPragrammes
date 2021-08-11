#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,add,addpos,temp,temp1,j;
    printf("Enter length of array\n");
    scanf("%d",&n);

    int array[n];

    printf("\nEnter elements in array\n");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("\nEntered array is\n");
        for(i=0;i<n-1;i++)
        {
            printf("%d ",array[i]);
        }

   printf("\nEnter additional value to add in array\n");
   scanf("%d",&add);

   printf("\nEnter position of additional entered value is\n");
   scanf("%d",&addpos);


   for(i=n;i>=addpos;i--)
   {
       array[i]=array[i-1];
   }

   array[addpos-1]=add;

   printf("\nNew array is\n");
   for(i=0;i<n;i++)
   {
       printf("%d ",array[i]);
   }





    return 0;
}
