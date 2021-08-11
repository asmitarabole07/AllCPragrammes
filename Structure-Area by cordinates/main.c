#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};

struct rect{
    struct point LR;
    struct point UL;
};

int area(struct rect a)
{
    int length,width;
    length=a.LR.x-a.UL.x;
    width=a.UL.y-a.LR.y;
    return length*width;
}
int main()
{
    struct rect a;

    printf("Enter lower right cordinates\n");
    scanf("%d %d",&a.LR.x,&a.LR.y);

    printf("\nEnter upper left cordinates\n");
    scanf("%d %d",&a.UL.x,&a.UL.y);

    printf("\nArea of rectangle is %d",area(a));

    return 0;
}
