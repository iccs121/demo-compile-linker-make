/*
Author: Songpon TEERAKANOK
Description: for explaining C Compilation process
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 1;
    char b = 'a';
    char* dead_pointer_tell_nothing = NULL;
    printf("next char: %c\n", (a+b));

    return 0;
}