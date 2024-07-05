#include<stdio.h>
/*
- Create a 2D Array , Integer , from 3 lines and 4 columns and put in every columns a random value
- Print the Value n4 in line 1
- Print the Value n3 in line 2
- Print the Value n1 in line 3
*/

int main ()
{
 int notes[3][4]={ //2D Array
 {2 , 9 , 3 , 1},
 {7 , 8 ,5 ,4},
 {10 , 6, 11 , 20},
 };

 printf("%i \n", notes[0][3]);
 printf("%i \n", notes[1][2]);
 printf("%i \n", notes[2][0]);
 return 0;
}