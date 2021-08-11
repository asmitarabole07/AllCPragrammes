#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rem,binary=0,i=1;

    printf("Enter number\n\n");
    scanf("%d",&n);

    while(n!=0)
    {
        rem=n%2;
        n=n/2;
        binary=binary+(rem*i);
        i=i*10;

    }

    printf("Binary form is %d",binary);

return 0;

}
