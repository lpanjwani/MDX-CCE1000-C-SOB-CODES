/******************************************************************************
Write a C program to convert binary to decimal numbers
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int a,answer=0,calc,i=0;

    printf("Enter Binary Number: ");
    scanf("%d", &a);

    while(a>0)
    {
      calc=(a%10)*(pow(2,i));
      answer=answer+calc;
      a=a/10;
      i++;
    }

    printf("Decimal Number: %d\n", answer);
    return 0;
}
