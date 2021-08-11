#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n=10,a,count=0;
    int number[10];
    printf("Enter 10 numbers in array \n");

    for(i=0;i<10;i++)
    {
        printf("Enter number %d\n",i+1);
        scanf("%d",&number[i]);
    }

        printf("Entered numbers are ");
        for (i=0;i<n;i++)
        {
            printf("%d,",number[i]);
        }

        printf("\n\n Enter number to be searched in an array\n");
        scanf("%d",&a);

        for(i=0;i<n;i++)
        {
            if(a==number[i])
            {
                count=count+1;
            }

        }

            printf("Entered number %d is %d times in an array",a,count);


    return 0;
}
