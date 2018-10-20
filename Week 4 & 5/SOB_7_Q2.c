/******************************************************************************
   Write a C program to print an integer entered by a user.
 *******************************************************************************/
#include <stdio.h>

int main()
{
        int value;

        printf("Enter Value: ");
        scanf("%d", &value);

        printf("Value is %d\n",  value);

        return 0;
}
