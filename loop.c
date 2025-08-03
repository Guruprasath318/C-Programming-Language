// while loop example in c
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    while(n > 0)
    {
        printf("Enter element %d: ", n);
        scanf("%d", &i);
        if(i % 2 == 0)
        {
            printf("%d is even.\n", i);
        }
        else
        {
            printf("%d is odd.\n", i);
        }
        n--;
    }
}

