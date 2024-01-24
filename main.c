#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
// #include <binary_ops.h>
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


void trungle()
{
    int row;
    int *arr = NULL;
    int n;

    scanf("%d", &row);
    n = row * row;
    arr = calloc(n, sizeof(int));

    // arr[i * row + j]
    // n
    // i = n / row     j = n % row

    for (int i = 0; i != row; i++)
    {
        arr[i * row + i] = 1;
    }

    for (int i = 0; i != row; i++)
        for (int j = row - i; j != row; i++, j++)
        {
            arr[i * row + j] = 1;
        }

    for (int i = 0; i != n; i++)
    {
        if (i % row == 0 && i != 0)
            printf("\n");
        printf("%d ", arr[i]);
    }
}

typedef unsigned long long ull;

// typedef unsigned long size_t;

int** create_matrix(size_t rows, size_t cols)
{
    int **matrix = calloc(rows, sizeof(int*));

    if (matrix == NULL)
        return NULL;

    for (size_t i = 0; i < rows; ++i)
    {
        matrix[i] = calloc(cols, sizeof(int));

        if (matrix[i] == NULL)
        {
            for (size_t j = 0; j < i; ++j)
                free(matrix[j]);
            free(matrix);
        }
    }
    return matrix;
}

// 1  2  3  4
// 8  7  6  5
// 9 10 11 12

void snake(int** matrix, size_t rows, size_t cols)
{
    int k = 0;
    for (int i = 0; i < rows; i++)
    {
        if (i % 2 == 0)
            for (int j = 0; j < cols; j++)
            {
                matrix[i][j] = k;
                k++;
            }
        else
            for (int j = cols - 1; j >= 0; j--)
            {
                matrix[i][j] = k;
                k++;
            }
    }
}
// 3 4 5
// 1 6 3
// 2 7 3
// [i][j+1]   [i-1][j]

void scan_matrix(int** matrix, size_t rows, size_t cols)
{
    for (int i = 0; i != rows - 1; i++)
    {
        for (int j = 0; j != cols - 1; j++)
            scanf("%d", matrix[i][j]);
    }
}

void money(int** matrix, size_t rows, size_t cols)
{
    int coins = 0; 

    for (int i = 0, j = cols; j != 0 && i != rows;)
    {
        if (matrix[i][j - 1] > matrix[i + 1][j])
        {
            coins += matrix[i][j - 1];
            j--;
        }
        else 
        {
            coins += matrix[i - 1][j];
            i--;
        }
    }
    printf("%d", coins);
}

void print_matrix(int** matrix, size_t rows, size_t cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

// int hamming_distance(unsigned int a, unsigned int b);

// rows, rows
// 1 1 1 1
// 0 1 1 1
// 0 0 1 1
// 0 0 0 1

int main(int argc, char** argv)
{
    if (argc < 3)
        return -1;

    size_t rows = atoi(argv[1]);
    size_t cols = atoi(argv[2]);
    
    int **matrix = create_matrix(rows, cols);
    if (!matrix)
    {
        perror("create_matrix");
        return -1;
    }
    scan_matrix(matrix, rows, cols);
    money(matrix, rows, cols);

    // trungle();
//    unsigned int a = 0xDEADBEAF;
//    unsigned int b = 0xBAADDAAD;

//    print_int(a);
//    putchar('\n');
//    print_int(b);
//    putchar('\n');
//    printf("%d", hamming_distance(a, b));
//    putchar('\n');

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
