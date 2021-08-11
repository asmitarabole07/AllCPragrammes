#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,add,c=0;

    printf("Enter first number\n");
    scanf("%d",&a);

    printf("Enter second number\n");
    scanf("%d",&b);

    while(b!=0)
    {
        a++;
        b--;
    }

    printf("Sum is %d",a);
    return 0;
}
