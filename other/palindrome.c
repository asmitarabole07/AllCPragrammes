#include <stdio.h>
#include <stdlib.h>

 int main()
{
    int n,result=0,q,r;

    printf("Enter number\n");
    scanf("%d",&n);

        q=n;

        while(q!=0)
        {
            r=q%10;
            result=result*10+r;
            q=q/10;
        }

            if (result==n)
                printf("number is palindrome");
            else
                printf("Number is not palindrome");

            return 0;
}

