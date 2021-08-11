#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,exponent,value,expo;

    printf("Enter Base\n");
    scanf("%d",&base);

    printf("Enter exponent\n");
    scanf("%d",&exponent);

    expo=exponent;
    value=1;


        while(expo!=0)
         {
             value=value*base;
            expo--;
        }
        printf("value is %d",value);
    return 0;
}
