// This program is to check the RANGE of integers //

#include <stdio.h>
int main()
{
    int x , y ;
    printf ("Enter a number between 0 to 39:");
    scanf("%d" , &y);
    
    if (y/10==0)
    {
        printf("You have entered the number in the range of 0 to 9\n");
    }
    else if (y/10==1)
    {
    printf("You have entered the number in the range of 10 to 19\n");
    }
    else if (y/10==2)
    {
     printf("You have entered the number in the range of 20 to 29\n");   
    }
    else if (y/10==3)
    {
     printf("You have entered the number in the range of 30 to 39\n");    
    }
    else
    {
        printf ("The number is not in the given range\n");
    }
    return 0;
    
}

Output-
// This program is to check the RANGE of integers //

#include <stdio.h>
int main()
{
    int x , y ;
    printf ("Enter a number between 0 to 39:");
    scanf("%d" , &y);
    
    if (y/10==0)
    {
        printf("You have entered the number in the range of 0 to 9\n");
    }
    else if (y/10==1)
    {
    printf("You have entered the number in the range of 10 to 19\n");
    }
    else if (y/10==2)
    {
     printf("You have entered the number in the range of 20 to 29\n");   
    }
    else if (y/10==3)
    {
     printf("You have entered the number in the range of 30 to 39\n");    
    }
    else
    {
        printf ("The number is not in the given range\n");
    }
    return 0;
    
}


Output-
Enter a number between 0 to 39 : 30
You have entered the number in the range of 30 to 39

