#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[20];
    int age;
    float percentage;
};

int main()
{

    struct student s[2];
    int i;

    for(i=0;i<2;i++)
    {
        printf("Enter name of student %d:\n",i+1);
        scanf("%s",s[i].name);
        printf("Enter age of student %d:\n",i+1);
        scanf("%d",&s[i].age);
        printf("Enter percentage of student %d:\n",i+1);
        scanf("%f",&s[i].percentage);
    }

    printf("\n\n");


    for(i=0;i<2;i++)
    {
        printf("Student %d details are",i+1);
        printf("\nName is: %s",s[i].name);
        printf("\nAge is: %d",s[i].age);
        printf("\nPercentage is: %.1f",s[i].percentage);
        printf("\n\n\n");
    }

    getch();
    return 0;
}
