#include<stdio.h>
int main()
{
    int ch;
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("\n one");
            break;
        case 2:
            printf("\n two");
            break;
        case 3:
            printf("\n three");
            break;
        case 4:
            printf("\n four");
            break;
         default:
            printf("\n invalid error");
    }
}