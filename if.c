#include<stdio.h>


int main () 
{
    char Movies[]=" 1)- Morocco \n 2)- The World \n 3)- Inside \n ";
    char Plus18[]= " 4)- The pussy \n 5)- The Ass \n";


    int age; 
    printf(" Plz Entre Your age= " ,age);
    scanf(" %i", &age);
    printf(" %s", Movies);
    if (age > 18)
    {
        printf(" %s", Plus18);
    }


    return 0 ;
}