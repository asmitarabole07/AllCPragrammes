#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10]={34,65,3,22,45,67,75,33,3,12};
    int i, min=array[0],max=array[0];




    printf("Entered array is\n");
    for(i=0;i<10;i++)
    {
       printf("%d,",array[i]);
    }

    for(i=1;i<10;i++)
       {
           if(array[i]<min)
            {min=array[i];
            }
            else if(array[i]>max)
            {
                max=array[i];
            }
       }

    printf("\nMinimum value is %d and Maximum value is %d",min,max);



    return 0;
}
