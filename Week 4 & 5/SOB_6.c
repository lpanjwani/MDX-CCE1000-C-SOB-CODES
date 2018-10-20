/******************************************************************************
  Write a C program that will read two digits from the keyboard and output different
  logic gates, namely AND, OR, XOR and NOT. Test your program if it produces the
  correct output by checking the corresponding truth tables.
 *******************************************************************************/
#include <stdio.h>

int
main ()
{
        int a;
        int b;
        int AND;
        int OR;
        int XOR;
        int NOTA;
        int NOTB;

        printf ("Enter Variable A: ");
        scanf ("%d", &a);

        printf ("Enter Variable B: ");
        scanf ("%d", &b);

        AND = a & b;
        OR = a | b;
        XOR = a ^ b;
        NOTA = !a;
        NOTB = !b;

        printf ("AND Answer is %d\n", AND);
        printf ("OR Answer is %d\n", OR);
        printf ("XOR Answer is %d\n", XOR);
        printf ("NOT OF A's Answer is %d\n", NOTA);
        printf ("NOT OF B's Answer is %d\n", NOTB);

        return 0;
}
