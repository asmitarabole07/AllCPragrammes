#include <stdio.h>
#include <stdlib.h>

int max(int a, int b, int c, int d)
{
    int maximum=a;
    if(a<b){
        if(a<c){
            if(a<d){
             maximum=d;}
       else maximum=c;}
     else  maximum=b;}

    return maximum;
}

int main()
{
    int a,b,c,d;

    printf("Enter 4 digits\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);



    printf("\nMax number is %d",max(a,b,c,d));
    return 0;
}
