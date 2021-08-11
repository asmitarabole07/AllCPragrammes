#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100];
    int i,count=0;

    printf("Enter string : ");
    gets(string);

    printf("\nEntered string is : %s",string);

    for(i=0;i<=strlen(string);i++)
    {
        if(string[i]==' ')
        count++;
    }

    printf("\nNumber of words are %d :",count+1);

    return 0;
}
