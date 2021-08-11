#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,count=0,p;
    printf("Enter number\n");
    scanf("%d",&n);

    int prime[n];
    int nprime[n];

    for(j=1;j<=n;j++)
    {
        count=0;
        for(i=2;i<=j/2;i++)
            {
               if(j%i==0)
               {
                   count++;
                   break;
               }
            }
            if(count==0 && j!=1)
                printf("%d ",j);

    }


    return 0;
}
