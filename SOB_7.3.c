/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

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



