/******************************************************************************

   Welcome to GDB Online.
   GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
   C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
   Code, Compile, Run and Debug online from anywhere in world.

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
