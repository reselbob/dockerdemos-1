#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef MAX
#define MAX 100
#endif

int main(int argc, char *argv[]) {
    int n1 = 1;

    char *num;
    char buffer[MAX];
    while( 1 == 1){
         if (asprintf(&num, "%d", n1) == -1) {
        perror("asprintf");
        } else {
            strcat(strcpy(buffer, "HELLO WORLD! run number="), num);
            printf("%s\n", buffer);
            free(num);
            n1++;
        } 
    }
    exit(EXIT_SUCCESS);
}