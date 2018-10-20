/******************************************************************************

   Welcome to GDB Online.
   GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
   C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
   Code, Compile, Run and Debug online from anywhere in world.

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
