#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n=1;

    for(n;n<=10;n++)
    {
        if(n%2!=0)
            printf("%d,",n+1);
        else
            printf("%d,",n-1);
    }

}

