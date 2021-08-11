#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,d,i,a,count=0;

    printf("Enter a number\n");
    scanf("%d",&n);

    d=sqrt(n);
    printf("Square root is %d\n\n\n",d);

    for(i=2;i<=d;i++)
        {

        a=n%i;
        if(a==0)
        {count=1;
             break;
        }
        printf("mod is %d\n\n\n",a);
        }
    if (count==0)
        {
            printf("Not prime\n\n\n\n\n");
        }
    else
        printf("Prime");


    return 0;
5}
