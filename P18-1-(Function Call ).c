/*This program is to show Function call by value in C*/


#include<stdio.h>

int cube(int z)

{
    
 z=z*z*z;
     
 return(z);
    

}

int main()

{

  int n=99;

  printf("Cube of %d is %d\n",n,cube(n));

    return 0;

}

Output-
Cube of 99 is 970299