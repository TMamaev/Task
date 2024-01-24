#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
// https://informatics.msk.ru/mod/statements/view.php?id=208#1
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
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0, k = n - 1; i < n / 2; i++, k--)
    {
        rev = arr[k];
        arr[k] = arr[i];
        arr[i] = rev;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
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

#ifdef MAIN

int main()
{
    test();
    return 0;
}

#endif
