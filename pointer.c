#include<stdio.h>

int main()
{
    int a=10;
    int *p,**q,***r;
    p=&a;
    printf("\n Pointer address value   : %d",*p); // dereferanc pointer 
    printf("\n Address of the pointer  : %d",p); // address value of the pointer
    printf("\n Address of the variable : %d",&a); // address of the variable
    printf("\n Address of the variable : %d",&p); // address of the pointer

    printf("\n-----------------------------------");
    q=&p;
    printf("\n Pointer address value   : %d",**q); // dereferanc pointer 
    printf("\n Address of the pointer  : %d",q); // address value of the pointer
    printf("\n Address of the variable : %d",&p); // address of the variable
    printf("\n Address of the variable : %d",&p); // address of the pointer

    printf("\n-----------------------------------");
    r=&q;
    printf("\n Pointer address value   : %d",***r); // dereferanc pointer 
    printf("\n Address of the pointer  : %d",r); // address value of the pointer
    printf("\n Address of the variable : %d",&q); // address of the variable
    printf("\n Address of the variable : %d",&q); // address of the pointer
}