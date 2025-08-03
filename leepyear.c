#include <stdio.h>

int main()
{
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("/n%d is leep year.",year);
        }
        else
        {
            printf("\n%d is not a leeap year.",year);
        }
    }
    else
    {
        if(year%4=0)
        {
            printf("/n%d is leep year.",year);
        }
        else
        {
            printf("\n%d is not a leeap year.",year);
        } 
    }
}