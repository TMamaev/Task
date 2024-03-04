
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
// https://informatics.msk.ru/mod/statements/view.php?id=208#1
void scanf_mat(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void print_mat(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}



void even()
{
    int n;
    int A[100];

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    
    for(int i = 0; i < n; i++)
        if (i % 2 == 0)
            printf("%d ", A[i]);
}

void even_nums()
{
    int n;
    int num;

    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        A[i] = num;
    }
    for (int i = 0; i < n; i++)
        if (A[i] % 2 == 0)
            printf("%d ", A[i]);
}

void num_pos()
{
    int n;
    int num;
    int sum = 0;

    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        A[i] = num;
    }
    for (int i = 0; i < n; i++)
        if (A[i] > 0)
            sum++;
    printf("%d", sum);
}

void more_prev_num()
{
    int n;
    int num;
    int sum = 0;

    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        A[i] = num;
    }
    for (int i = 1; i < n; i++)
        if (A[i] > A[i - 1])
            sum++;
    printf("%d", sum);
}

void one_sign()
{
    bool check = false;
    int n;
    int num;

    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        A[i] = num;
    }
    for (int i = 1; i < n; i++)
        if ((A[i] > 0 && A[i - 1] > 0) || (A[i] < 0 && A[i - 1] < 0))
            check = true;
    if (check)
        printf("YES");
    else 
        printf("NO");
}

void small_big_small()
{
    int sum = 0;
    int n;
    int num;

    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        A[i] = num;
    }
    for (int i = 2; i < n; i++)
        if (A[i] < A[i - 1] && A[i - 1] > A[i - 2])
            sum++;
    printf("%d", sum);
}


void reverse()
{
    int n;
    int rev;
    int *arr;

    scanf("%d", &n);
    arr = calloc(n, sizeof(int)); // malloc(n * sizeof(int))
    
    scanf_mat(n, arr);
    
    for (int i = 0, k = n - 1; i < n / 2; i++, k--)
    {
        rev = arr[k];
        arr[k] = arr[i];
        arr[i] = rev;
    }
    
    print_mat(n, arr);
    free(arr);
}

int get(int *arr, int row, int col)
{
    return ;
}

void test()
{
    int row = 2;
    int col = 3;
    int *arr = calloc(row * col, sizeof(int));

    for (int i = 0; i < row * col; i++)
    {
        scanf("%d", &arr[i]);
    }
    // i - row
    // j - col
    for (int i = 0; i < row * col; i++)
    {
        if (i == col)
            printf("\n");
        printf("%d ", arr[i]);

    }
    printf("arr[1][2] = %d\n", get(arr, 1, 2));
}


int search(int *arr, size_t size, int val)
{
    int size1 = (int)size;

    for (int i = 0; i < size1; i++)
    {
        if (arr[i] == val)
        {
            return i;
        }
    }
    return -1;
}
// O(N)

int binary_search(int *arr, size_t size, int val)
{
    size_t left = 0;
    size_t right = size;
    size_t mid = 0;
    
    while (left < right)
    {
        mid = (left + right) / 2;
        
        if (arr[mid] == val)
            return mid;
        else if (arr[mid] > val)
            right = (left + right) / 2;
        else 
            left = (left + right) / 2;
    }
}
// (b - a) / 2. (a + b) / 2
// [a; b]
//
// gcc -o main main.c
// a.out -> main

// Иванов
// а б ... ж ... и ... н ... я
// открыл середину - Н.
// листаю назад на половину от первой половин - Ж.
// хранить позицию двух букв Ж и Н.
// если найден - легко, проверка просто. Если на позиции right - 1 находится left



#ifdef MAIN

int main()
{
    int arr[] = {1, 3, 4, 5, 67, 354, 7536};
    printf("%d\n", binary_search(arr, 7, 4));
    printf("%d\n", binary_search(arr, 7, 3));
    //printf
    return 0;
}

#endif
