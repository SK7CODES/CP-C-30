
/*This program is to show structures in C */


#include <stdio.h>
struct student 
{
    int phy;
    int maths;
    int CP;
};
int main ()
{
    int total;
    struct student stud;
    stud.phy=99;
    stud.maths=100;
    stud.CP=99;
    total= stud.phy + stud.maths+stud.CP;
    printf("The total is %d\n",total);
    return 0 ;
}


Output-
The total is 298