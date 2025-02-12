/*
Author: Songpon TEERAKANOK

This example will demonstrate how a function is created in another C file 
and linked back here to the main.c

Note: compile and run using, gcc main.c extra_functions.c -o executable; ./executable
*/

#include <stdio.h>
#include "extra_functions.h"

int main() {
    greet();

    int result = add(5, 3);
    printf("The sum is: %d\n", result);

    return 0;
}