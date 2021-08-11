#include <stdio.h>
#include <stdlib.h>

void update(int *p,int *q)
{
    printf("Sum is %d",*p+*q);
    if(*p>*q)
    printf("\n absolute difference is %d",*p-*q);
    else
    printf("\nabsolute difference is %d",*q-*p);
}


int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);

    update(&a,&b);

    return 0;
}
