/*This program is to show Function call by reference*/

#include <stdio.h>
#include <string.h>

int swap (int*a, int*b)
{
int t;
t=*a;
*a=*b;
*b=t;
}
int main()
{
int i,j;
printf("Enter the values : \n");
scanf("%d %d" ,&i,&j);
 
printf("Before swapping %d and %d\n",i,j);
swap (&i,&j);

printf("Ater swapping %d and %d\n" ,i,j);

return 0;
}



Output-
Enter the values : 
10
11
Before swapping 10 and 11
Ater swapping 11 and 10