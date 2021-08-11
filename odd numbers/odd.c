#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n;

    printf("Enter first number in range\n");
    scanf("%d",&n1);

    printf("Enter second number in range\n");
    scanf("%d",&n2);

    n=n1;

    for(n;n<=n2;n++)
    {
        if(n%2 != 0)
            printf("%d,\t",n);

    }
    return 0;
}
