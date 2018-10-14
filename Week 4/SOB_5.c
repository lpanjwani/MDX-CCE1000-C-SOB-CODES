/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    int b;
    int add;
    int minus;
    
    printf("Enter Variable A: ");
    scanf("%d", &a);
    
    printf("Enter Variable B: ");
    scanf("%d", &b);
    
    add = a + b;
    minus = b -a;
    
    printf("Add Answer is %d\n",  add);
    printf("Minus Answer is %d\n",  minus);

    return 0;
}


