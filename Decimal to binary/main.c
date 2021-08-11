#include <stdio.h>
#include <stdlib.h>
int binary(int);
int main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n);

    binary(n);

    return 0;


}

int binary(n)
{
    int r;
    r=n%2;
    n=n/2;

    if(n==0)
    {
        printf("binary is %d",r);
        return (r);
    }
    else
        binary(n);
        printf("%d",r);





}
