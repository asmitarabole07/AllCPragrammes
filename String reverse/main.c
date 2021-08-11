#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char s[10];
    printf("Enter a string\n");
    scanf("%s",s);

    a=strlen(s)-1;

    while(a!=-1)
    {
      printf("%c",s[a]);
      a--;
    }

    return 0;
}
