#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,e;

    printf("Enter base value\n");
    scanf("%d",&b);

    printf("Enter exponent value\n");
    scanf("%d",&e);

    printf(" value of %d raised to %d is %d",b,e,value(b,e));
    return 0;

    getch();
}

   int value(b,e)
{
    int t,i;
    t=b;
    for(i=1;i<e;i++)
    {
        t=t*b;
    }
    return t;
}
