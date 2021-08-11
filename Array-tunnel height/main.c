#include <stdio.h>
#include <stdlib.h>



int main()
{
    int n,i;
    printf("Enter number of boxes\n");
    scanf("%d/n",&n);

    int h[n];
    int w[n];
    int l[n];

    printf("Enter height,width and length of box\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&h[i]);
            scanf("%d",&w[i]);
            scanf("%d",&l[i]);
        }

    for(i=0;i<n;i++)
    {
        if(h[i]<41)
        {
            printf("Volume is %d\n",h[i]*w[i]*l[i]);
        }
    }

    return 0;
}
