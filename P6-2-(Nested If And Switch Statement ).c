// This program is to check the RANGE of integers by using SWITCH statement //

#include <stdio.h>
int main()
{
    int x , y ;
    printf ("Enter a number between 0 to 39 : ");
    scanf("%d" , &y);
    x=y/10;
    switch(x)
    {
        case 0:
        printf("You have entered the number in the range of 0 to 9\n");
        break;
        case 1:
        printf("You have entered the number in the range of 10 to 19\n");
        break;
        case 2:
        printf("You have entered the number in the range of 20 to 29\n");
        break;
        case 3:
        printf("You have entered the number in the range of 300 to 39\n");
        break;
        default:
        printf ("The number entered is not in the range \n");
    }
    return 0;
}

Output-
Enter a number between 0 to 39 : 7
You have entered the number in the range of 0 to 9
