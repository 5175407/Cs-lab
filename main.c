// main.c
#include <stdio.h>
#include "fibonacci.h"

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printFibonacci(n);

    return 0;
}

