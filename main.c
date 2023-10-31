#include <limits.h>
#include <math.h>
#include <stdio.h>

#include <binary_ops.h>
// #include "include/binary_ops.h"

void print_int(unsigned int num)
{
    for (int i = CHAR_BIT * sizeof(int) - 1; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0)
            putchar(' ');
    }
}

// int hamming_distance(unsigned int a, unsigned int b);

int main(void)
{
    unsigned int a = 0xDEADBEAF;
    unsigned int b = 0xBAADDAAD;

    print_int(a);
    putchar('\n');
    print_int(b);
    putchar('\n');
    printf("%d", hamming_distance(a, b));
    putchar('\n');

    return 0;
}

// gcc -I ./include main.c individual/binary_ops.c -o main
// warning
// ln: undefinded reference to hamming_distance
// $ ./main

// preprocessing
// gcc -E -o main.full main.c

// preprocessing + trans
// gcc -S -o main.full main.c

// preprocessing + trans
// gcc -c -o main.o main.c
