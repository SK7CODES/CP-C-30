//Logical operators//
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values of a, b and c\n");
    scanf(" %d %d %d", &a, &b, &c);
    if ((a>b) && (a>c))
    printf("a is greatest\n");
    else if (b > c)
    printf("b is greatest\n");
    else 
    printf("c is greatest\n");
    if ((a==0)||(b==0)||(c==0))
    printf("The product of a, b and c is zero\n");
    return 0;
}


Output-
Enter the values of a, b and c
7
6
2
a is greatest
