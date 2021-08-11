#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,i;

    printf("Enter number of students\n\n");
    scanf("%d",&n);

    int age[n];

    for(i=0;i<n;i++)
    {
        printf("Enter age of student %d\n",i+1);
        scanf("%d",&age[i]);
    }

    printf("\n\n\n");

    for(i=0;i<n;i++)
    {
        printf("Age of student %d is %d \n",i+1,age[i]);
    }

}







