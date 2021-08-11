#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10],i=0,t,j;
    printf("Enter 10 values in array\n");
        for(i=0;i<10;i++)
        {
            scanf("%d",&array[i]);


        }
    printf("Entered values are\n");
            for(i=0;i<10;i++)
            {
                printf("%d ",array[i]);
            }

        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)

            {
                if(array[i]<array[j])
                {
                t=array[j];
                array[j]=array[i];
                array[i]=t;
                }
            }

        }

        printf("Values in ascending order are \n");
        for(i=0;i<10;i++)
        {
            printf("%d ",array[i]);
        }
    getch();
    return 0;
}
