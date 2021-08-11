#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,fact;
    printf("Enter number\n");
    scanf("%d",&n);

    i=1;
    fact=1;

    for(i;i<=n;i++)
        {fact=fact*i;
        }

    printf("Factorial of %d is %d\n\n\n",n,fact);
        return 0;

}
