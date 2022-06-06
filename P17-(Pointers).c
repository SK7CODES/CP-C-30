/*This program is to show Pointers in C */

#include <string.h>
void main()
{
long int num = 7;
long int *ptr;
printf ("num's address : %p\n",&num);
ptr = &num;

printf ("pointer's address : %p\n",&ptr);
printf ("pointer's size : %ld bytes\n",sizeof(ptr));
printf ("pointer's value : %p\n", ptr);
printf ("Value pointed to : %ld\n", *ptr);

}


Output-
num's address : 0x7ffdcddf6bc8
pointer's address : 0x7ffe4e327450
pointer's size : 8 bytes
pointer's value : 0x7ffe4e327448
Value pointed to : 7
