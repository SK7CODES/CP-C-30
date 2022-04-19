// This program is to show the Typecasting function in C //


#include <stdio.h>
int main()
{
     int a,b ;
     float c ;
     a =7 ;
     b =3 ;
     c=a/b ;
     printf ("Value of c is %.2f\n",c);
     c=(float)a/b ;
     printf ("Value of c is %.2f\n",c);
     return 0;
}


Output-
Value of c is 2.00
Value of c is 2.33