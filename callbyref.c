#include<stdio.h>

//  Function call by reference - to swap the value of a to b and b to a 
void swap(int* a, int* b)
{
 int swap=*a;
 *a=*b;
 *b=swap;
}

int main()
{
 int a=10, b=20;
 printf("\nThe a is =%i \n the b is %i", a, b);
 swap(&a , &b);
 printf("The a is =%i \n the b is %i", a, b);
 return 0; 
}