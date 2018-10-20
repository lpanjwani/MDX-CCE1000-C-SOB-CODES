/******************************************************************************
   Write a C program that accepts a decimal number from the user and the decimal
   number is then converted into the equivalent octal number with simple steps.
   Tips: Steps to Convert Decimal to Octal :
   1. Accept the given decimal number
   2. If the number is less than 8 the octal number is the same
   3. If the num > 7 then Divide the number with 8
   4. Write down the remainder
   5. Do steps 3 and 4 with the quotient till that quotient is less than 8
   6. Write the remainders in reverse order (bottom to top)
   7. The resultant is the equivalent octal number to the given decimal number
 *******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
        int quotient,rem,rem_store=0,i=0;
        printf("Enter Decimal Number: ");
        scanf("%d", &quotient);
        if(quotient>7) {
                while(quotient>0) {
                        rem=(quotient%8)*(pow(10,i));
                        rem_store=rem_store+rem;
                        quotient=quotient/8;
                        i++;
                }
        }
        else{
                rem_store=quotient;
        }

        printf("Octal Number is %d \n", rem_store);

        return 0;
}
