#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef MAX
#define MAX 100
#endif

#include <time.h>
 
void delay(int number_of_half_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 500 * number_of_half_seconds;
 
    // Storing start time
    clock_t start_time = clock();
 
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

int main(int argc, char *argv[]) {
    while( 1 == 1){
        delay(1);
        printf(".");
    }
    exit(EXIT_SUCCESS);
}