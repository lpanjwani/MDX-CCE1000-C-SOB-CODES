/******************************************************************************
   Write a C program to add two integers entered by user.
 *******************************************************************************/
#include <stdio.h>

int main()
{
        int value1;
        int value2;
        int answer;

        printf("Enter 1st Value: ");
        scanf("%d", &value1);

        printf("Enter 2nd Value: ");
        scanf("%d", &value2);

        answer = value1 + value2;

        printf("Asnwer is %d\n",  answer);

        return 0;
}
