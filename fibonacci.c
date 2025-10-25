// fibonacci.c
#include <stdio.h>
#include "fibonacci.h"

void printFibonacci(int n) {
    int first = 0, second = 1, next, i;

    printf("Your fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
           next = first + second;
            second = next - first;
            first = next - second;
        }
        printf("%d ", next);
    }

    printf("\n");
}

