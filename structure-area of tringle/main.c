#include <stdio.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
};

struct tringle{
    struct point p;
    struct point q;
    struct point r;
};

int area(struct tringle t)
{
    int base,height;
    base=t.q.x-t.p.x;
    height=t.r.y-t.p.y;
    return 0.5*base*height;
}
int main()
{
    struct tringle t;

    printf("Enter cordinates P\n");
    scanf("%d %d",&t.p.x,&t.p.y);

    printf("\nEnter cordinates Q\n");
    scanf("%d %d",&t.q.x,&t.q.y);

    printf("\nEnter cordinates R\n");
    scanf("%d %d",&t.r.x,&t.r.y);


    printf("\nArea of rectangle is %d",area(t));

    return 0;
}
