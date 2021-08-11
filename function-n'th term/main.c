#include <stdio.h>
#include <stdlib.h>

int s(int n, int a, int b, int c )
{
    int x=a+b+c;
    if(n>4)
    {
        x=s(--n,b,c,x);
    }
    return x;

}

int main()
{
    int n,a,b,c;
    printf("Enter n'th term\n");
    scanf("%d",&n);

    printf("Enter first 3 numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    printf("\n n'th term is %d",s(n,a,b,c));

    return 0;
}
