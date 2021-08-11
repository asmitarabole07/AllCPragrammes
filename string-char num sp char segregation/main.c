#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,charcount=0,numcount=0;
    char start;
    char string[100];
    printf("Enter String : ");
    gets(string);

    printf("Entered string is %s",string);

    for(i=0;i<strlen(string);i++)
    {
        for(start='a';start<='z';start++)
        {
            if(string[i]==start)
            charcount++;

        }

    }

    for(i=0;i<strlen(string);i++)
    {
        for(start='0';start<='9';start++)
        {
            if(string[i]==start)
            numcount++;

        }

    }
    printf("\ncharacter count is : %d",charcount);
    printf("\nnumber count is : %d",numcount);
    printf("\nSpecial characters count is : %d",strlen(string)-charcount-numcount);

    return 0;
}
