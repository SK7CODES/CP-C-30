//This program is to show Relational Operators in C //
#include <stdio.h>
int main()
{
int a,b;
printf("Enter the values of a and b\n");
scanf("%d %d",&a,&b);
if(a>b)
printf("%d is greater than %d\n",a,b);
else if(a<b)
printf("%d is lesser than %d\n",a,b);
if (a<=b)
printf("%d is less than or equal to %d \n",a,b);
else if (a>=b)
printf("%d is greater than or equal to %d\n",a,b);
if (a==b)
printf("%d is equal to %d \n", a,b);
else if(a!=b)
printf("%d is not equal to %d\n",a,b);
return 0;
}


Output-
Enter the values of a and b
7
4
7 is greater than 4
7 is greater than or equal to 4
7 is not equal to 4 
