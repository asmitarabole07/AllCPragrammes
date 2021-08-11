#include <stdio.h>
#include <stdlib.h>

struct bank{
    int account_no;
    char name[20];
    int balance;

};

struct bank cust[10];

int main()

{
    int k,n,n1,amt;

    for(k=1;k<=5;k++)
    {
        printf("Enter customer %d details\n",k);
       printf("Account no : "); scanf("%d",&cust[k].account_no);
        printf("Name : "); scanf("%s",&cust[k].name);
        printf("Balance : "); scanf("%d",&cust[k].balance);
        printf("\n");
    }


    /*struct bank cust_[2]={102,"B",378};
    struct bank cust_[3]={103,"C",321};
    struct bank cust_[4]={104,"D",99};
    struct bank cust_[5]={105,"E",453};
    struct bank cust_[6]={106,"F",101};
    struct bank cust_[7]={107,"G",100};
    struct bank cust_[8]={108,"H",109};
    struct bank cust_[9]={109,"I",955};
    struct bank cust_[1]={110,"J",103};*/

    printf("\nBelow are the account details having balance <100\n\n");

    for(k=1;k<=5;k++)
    {
        if(cust[k].balance<100)
        {
            printf("Account no : %d, Name : %s, Balance : %d\n",cust[k].account_no,cust[k].name,cust[k].balance);

        }

    }

    printf("\n\nEnter Account number for transacton : "); scanf("%d",&n);
    printf("\nEnter '1' for deposit and '2' for withdrawl : "); scanf("%d",&n1);

    if(n1==1)
    {
        printf("\nEnter deposit amount : "); scanf("%d",&amt);

    }
    else if(n1==2)
    {
        printf("\nEnter withdrawl amount : "); scanf("%d",&amt);
    }



    if(n1==1)
    {
        for(k=1;k<=5;k++)
        {
            if(n==cust[k].account_no)
            {
            cust[k].balance=cust[k].balance+amt;
            printf("\nNew balance in account no %d is : %d",n,cust[k].balance);
            }
        }
    }
    else if(n1==2)
    {
        for(k=1;k<=5;k++)
        {
            if(n==cust[k].account_no && cust[k].balance>=amt )
            {
                    cust[k].balance=cust[k].balance-amt;
                    printf("\nNew balance in account no %d is : %d",n,cust[k].balance);

            }
            else
                printf("Insufficient balance#");

        }
    }

    }














































