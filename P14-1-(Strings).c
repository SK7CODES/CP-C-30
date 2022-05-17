//This program is to show application of String//

#include<stdio.h>
#include<string.h>
int main()
{ 
    char strname [40];
    printf ("Enter the string\n");
    scanf("%[^\n]s" , strname);
    printf ("The string is %s\n", strname);
    return 0;
}


Output-
Enter the string
SK
The string is SK