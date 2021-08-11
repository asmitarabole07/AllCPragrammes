#include <stdio.h>
#include <stdlib.h>

int main()
{
        unsigned int n,rem,dec,wt;

    printf("Enter decimal number\n");
    scanf("%d",&n);

    dec=0;
    wt=1;

    while(n!=0)
    {
        rem=n%10;
        dec=dec+rem*wt;
        wt=wt*2;
        n=n/10;
    }
    printf("Binary to decimal is %d\n\n\n\n",dec);

    return 0;
}
