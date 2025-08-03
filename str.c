// String function in C 

#include <stdio.h>
#include <string.h>

int main()
{
    char c[100],a[100];
    printf("Enter a String:");
    gets(c);
    printf("\nLength : %d",strlen(c));
    printf("\nRevese : %s",strrev(c));
    printf("\nUpper  : %s",strupr(c));
    printf("\nlower  : %s",strlwr(c));
    printf("\ncopy   : %s",strcpy(c,a));
    printf("\n a %s",a);
}