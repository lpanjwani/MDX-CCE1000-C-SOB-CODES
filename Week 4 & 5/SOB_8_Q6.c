/******************************************************************************
  Write a C program to compute quotient and remainder of two integers entered by
  user.
 *******************************************************************************/
#include <stdio.h>

int main()
{
        int dividend;
        int divisor;
        int quotient;
        int Remainder;

        printf("Enter Dividend: ");
        scanf("%d", &dividend);

        printf("Enter Divisor: ");
        scanf("%d", &divisor);

        quotient = dividend / divisor;
        Remainder = dividend % divisor;

        printf("Quotient is %d\n",  quotient);
        printf("Remainder is %d\n",  Remainder);

        return 0;
}
