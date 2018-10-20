/******************************************************************************
  Write a C program to multiply two decimal numbers entered by user.
 *******************************************************************************/
#include <stdio.h>

int main()
{
        float value1;
        float value2;
        float answer;

        printf("Enter 1st Value: ");
        scanf("%f", &value1);

        printf("Enter 2nd Value: ");
        scanf("%f", &value2);

        answer = value1 * value2;

        printf("Asnwer is %f\n",  answer);

        return 0;
}
