#include <stdio.h>
#include <stdlib.h>

int main()
{
    char word;
    printf("Enter character\n");
    scanf("%c",&word);

    if(word=='a'||word=='e'||word=='i'||word=='o'||word=='u')
    {
        printf("entered character is vowel");
    }
    else
        printf("entered character is consonent");
    return 0;
}
