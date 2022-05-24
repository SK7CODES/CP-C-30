//This program is to show String Library Functions//


#include <stdio.h>
#include<string.h>
int main() 
{
char source[]="Sahil";
char target[10];
strcpy(target,source);
printf("source string=%s\n",source);
printf("target string=%s\n",target);
    
    return 0;
}

Output-
source string=Sahil
target string=Sahil