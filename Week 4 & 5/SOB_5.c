/******************************************************************************
  Write a C program that adds and subtract two integers entered by a user.
 *******************************************************************************/

#include <stdio.h>

int main()
{
        int a;
        int b;
        int add;
        int minus;

        printf("Enter Variable A: ");
        scanf("%d", &a);

        printf("Enter Variable B: ");
        scanf("%d", &b);

        add = a + b;
        minus = b -a;

        printf("Add Answer is %d\n",  add);
        printf("Minus Answer is %d\n",  minus);

        return 0;
}
