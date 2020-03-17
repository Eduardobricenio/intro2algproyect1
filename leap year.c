#include <stdio.h>

int atoi(const char * string);
 
int isLeap(int year) 
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}
 
int main(int argc, char** argv)
{
    if (isLeap(atoi(argv[1]))) printf("leap year.\n");
    else printf("Year NO leap.\n");
 
    return 0;
}