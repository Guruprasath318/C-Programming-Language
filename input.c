#include <stdio.h>
int main()
{
    char name[50];
    int age;
    printf("----Voter Eligibelity Checker----\n");
    printf("Name -\n");
    scanf("%s",name);
    printf("Age  -\n");
    scanf("%d",&age);

    if (age >= 18)
    {
        printf("%s your age is %d,your are eligible! \n",name,age);
    }
    else
    {
        printf("%s your not eligible for voting, your age is %d.",name,age);
    }
    return 0;
}