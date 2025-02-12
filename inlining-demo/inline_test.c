/*
Author: Songpon TEERAKANOK
Description:
- try compile this code with 2 different options

Test 1:
gcc -O0 inline_test.c -o inline_test_O0
time ./inline_test

Test 2:
gcc -O2 inline_test.c -o inline_test_O2
time ./inline_test

*/

#include <stdio.h>
#include <time.h>

int square(int x) {  // Regular function (no inlining)
    return x * x;
}

extern inline int square_inline(int x) {  // Inline function
    return x * x;
}

int main() {
    int sum = 0;
    clock_t start, end;

    // Test normal function call
    start = clock();
    for (int i = 0; i < 100000000; i++) {
        sum += square(i);
    }
    end = clock();
    printf("Time (Normal Function): %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

    // Test inline function call
    start = clock();
    for (int i = 0; i < 100000000; i++) {
        sum += square_inline(i);
    }
    end = clock();
    printf("Time (Inline Function): %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}