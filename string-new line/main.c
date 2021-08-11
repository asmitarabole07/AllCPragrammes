#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];

    printf("Enter string\n");
    gets(s);


    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        s[i]='\n';

    }
    puts(s);

    return 0;
}
