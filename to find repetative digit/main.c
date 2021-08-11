#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rem;
    printf("Enter number\n");
    scanf("%d",&n);

    int seen[10]={0};

    while(n>0)
    {


        rem=n%10;
        if(seen[rem]==1)
            break;

            seen[rem]=1;

            n=n/10;




    }

    if (n>0)
        printf("There is repetative number %d",rem);
    else
        printf("There is no repetative number");*/

    /*int array[]={2,45,58,78,4,5,1,2,5,4,7,8,5,6,2,5,4,5,9,9,6,5,6,2,3,5,6};
    int l;

    l=sizeof(array)/sizeof(array[0]);

    printf("Size of array is %d and %d",l,sizeof(array[0]));*/

    return 0;
}
