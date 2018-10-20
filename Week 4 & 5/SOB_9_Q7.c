/******************************************************************************
  Write a C program to find the size of int, float, double and char of your system
 *******************************************************************************/
#include <stdio.h>


int main()
{
        printf("Storage Size for int: %d byts \n", sizeof(int));
        printf("Storage Size for float: %d byts \n", sizeof(float));
        printf("Storage Size for double: %d byts \n", sizeof(double));
        printf("Storage Size for char: %d byts", sizeof(char));

        return 0;
}
