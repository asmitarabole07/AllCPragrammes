#include <stdio.h>
#include <stdlib.h>


struct area{
    int length;
    int width;
};

void main()
{
    struct area a1;
    struct area a2;

    printf("Enter Length and width of rectangle 1\n");
    scanf("%d %d",&a1.length,&a1.width);

    printf("\nEnter Length and width of rectangle 2\n");
    scanf("%d %d",&a2.length,&a2.width);

    printf("\nArea of rectangle 1 is %d",a1.length*a1.width);
    printf("\nArea of rectangle 2 is %d",a2.length*a2.width);


    return 0;
}
