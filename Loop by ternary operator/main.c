#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter number\n");
    scanf("%d",&n);
    int len=2*n-1,min;

    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {

            {
                min=i<j?i:j;
                min=min<len-i?min:len-i-1;
                min=min<len-j-1?min:len-j-1;
                printf("%d ",n-min);

            }
        }
        printf("\n");
    }


    return 0;
}
