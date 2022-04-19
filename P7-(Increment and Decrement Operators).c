// This program is to show Increment and Decrement Operators in C //


#include <stdio.h>
int main ()
{
    int a=10 ;
    printf ("a's value is now %d\n", a++);
    printf ("a's value is now %d\n", a);
    a=10;
    printf ("a's value is now %d\n", ++a);
    printf ("a's value is now %d\n", a);
    a=10;
    printf ("a's value is now %d\n", a--);
    printf ("a's value is now %d\n", a);
    a=10;
    printf ("a's value is now %d\n", --a);
    printf ("a's value is now %d\n", a);
    return 0 ;
}


Output-
a's value is now 10
a's value is now 11
a's value is now 11
a's value is now 11
a's value is now 10
a's value is now 9
a's value is now 9
a's value is now 9

