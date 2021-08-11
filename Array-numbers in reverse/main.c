#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int rev[9]={34,56,54,32,67,89,90,32,21};

    printf("Given sequence is 34,56,54,32,67,89,90,32,21\n\n");

    printf("Sequence in reverse is ");

    for(i=8;i>=0;i--)
    {
        printf("%d,",rev[i]);
    }




}
