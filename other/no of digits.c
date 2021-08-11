#include <stdio.h>
#include <stdlib.h>

 int main()
{
   int n,count=0;

   printf("Enter number\n");
   scanf("%d",&n);

   while(n!=0)
   {
        n=n/10;
        count++;
   }

   printf("Number of digits are %d",count);

   return 0;

}


