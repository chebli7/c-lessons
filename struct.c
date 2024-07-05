#include <stdio.h>
// Create a Sturcture call "Person" and put inside it 3 Var and let's the user put the first one and print it.
struct person{ // Struct
 char name[15];
 int age;
 float height;
}Var;

int main()
{
 printf("Enter Your Name: ");
 scanf("%s", &Var.name);
 printf("Your name is : %s", Var.name);
 return 0;
}