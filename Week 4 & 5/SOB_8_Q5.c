/******************************************************************************
  Write a C program to find the ASCII value of character entered by user.
 *******************************************************************************/
#include <stdio.h>

int main()
{
        int letter;

        printf("Enter Character: ");
        scanf("%c", &letter);

        int value = letter;

        printf("Value is %d\n",  value);

        return 0;
}
