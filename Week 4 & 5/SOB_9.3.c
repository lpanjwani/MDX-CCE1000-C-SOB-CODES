/* After Understanding the code,
   I understand that this code is for
   Decimal Number to Binary Number Operations
 */


#include <stdio.h>
#include <conio.h>
#include <math.h>

void dec_bin(long int num) // Function Definition
{
        long int rem[50],i=0,length=0;
        while(num>0)
        {
                rem[i]=num%2;
                num=num/2;
                i++;
                length++;
        }
        printf("nBinary number : ");
        for(i=length-1; i>=0; i--)
                printf("%ld",rem[i]);
}
void main()
{
        long int num;
        clrscr();
        printf("Enter the decimal number : ");
        scanf("%ld",&num);
        dec_bin(num); // Calling function
        getch();
}
