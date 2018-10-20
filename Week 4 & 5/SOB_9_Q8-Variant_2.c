/******************************************************************************
  Write a C program to swap two numbers entered by user
 *******************************************************************************/
#include <stdio.h>

int main()
{
        float a,b;

        printf("Input First Variable: ");
        scanf("%f", &a);

        printf("Input Second Variable: ");
        scanf("%f", &b);

        a=a+b;
        b=a-b;
        a=a-b;

        printf("Answer: First: %f Second: %f", a, b);

        return 0;
}
