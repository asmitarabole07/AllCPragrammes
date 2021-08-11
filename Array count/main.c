#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,count=0;
    char s[100];

    printf("Enter string\n");
    gets(s);

    for(i=0;i<10;i++)
        {
            count=0;
            for(j=0;j<strlen(s);j++)
                {
                if(s[j]==48+i)
                    count++;
                }
            printf("%d=%d times, ",i,count);
        }



    return 0;
}
