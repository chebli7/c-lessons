#include<stdio.h>

int main ()
{
    // Pointer to print the memory address of Var "H"
    int h=5000; // Var 
    int* ptr=&h; // Pointer   &"Address"
    printf(" The Value Of H= %i \n", h);
    printf("The Memory Address Of H= %i", &h);
    return 0;
}