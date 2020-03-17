//this leap year problem was one of those we did in the exam

#include <conio.h> //these are libraries #include are imports
#include <stdio.h>

int main() //the (int main) is the designated entry point for a program running in an environment
{
    int anio; //declare the variable int means integer

    printf( "\n   please enter a year: ", 164 ); //in this step we declare that the variable prints the year you want to enter
    scanf( "%d", &anio ); //you read the value entered with a %d that is integer

    if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 ) //here we declare that the value entered will be divided by four hundred.
        printf( "\n   IS LEAP" ); //the result is printed if it is divisible by 400 is leap
    else
        printf( "\n  IT'S NOT LEAP." ); // if it doesn't meet this condition then you're going to print it's not leap

    getch(); //Read a single character directly from the keyboard

    return 0; //indicates that it has successfully completed
}