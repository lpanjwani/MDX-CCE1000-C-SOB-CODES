/******************************************************************************
  Write a C program to swap two numbers entered by user
 *******************************************************************************/
#include <stdio.h>

int main()
{
        float a,b,temp;

        printf("Input First Variable: ");
        scanf("%f", &a);

        printf("Input Second Variable: ");
        scanf("%f", &b);

        temp=b;
        b=a;
        a=temp;

        printf("Answer: First: %f Second: %f", a, b);

        return 0;
}
