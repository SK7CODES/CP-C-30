//This program is to show File Handling in C //


#include <stdio.h>
int main()
{
FILE *fp;
fp = fopen("/home/ttt/Desktop/sample.txt","w");
fprintf(fp,"Welcome to the spoken-tutorial\n");
fprintf(fp,"This is an test example\n");
fclose(fp);
return 0;
}



Output :
Welcome to the spoken-tutorial
This is an test example