#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j=0,k=0,even_sum=0,odd_sum=0;

    printf("Enter length of array\n");

    scanf("%d",&n);

    int array[n];
    int odd[n];
    int even[n];


        for(i=0;i<n;i++)
        {
            printf("Enter value %d in array\n",i+1);
            scanf("%d",&array[i]);
        }

    printf("\nEntered values are\n ");
     for(i=0;i<n;i++)
        {
        printf("%d,",array[i]);
        }

   for(i=0;i<n;i++)
   {
       if(array[i]%2==0)
       {
         even_sum=even_sum+array[i];
         /*even[j]=array[i];*/
         scanf("%d",&even[j]);
         j++;
       }
       else
       {
         odd_sum=odd_sum+array[i];
         /*odd[k]=array[i];*/
         scanf("%d",&odd[k]);
         k++;
       }
   }

//Even Number :
   printf("\n\nEven numbers are ");
        for(i=0;i<j;i++)
        {
            printf("%d,",even[i]);
        }

    printf("\n Sum of even number is %d",even_sum);


//Odd Number :
    printf("\n\nOdd numbers are ");
        for(i=0;i<k;i++)
        {
            printf("%d,",odd[i]);
        }
    printf("\n Sum of odd numbers is %d",odd_sum);


    getch();
    return 0;
}
