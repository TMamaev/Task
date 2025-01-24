#include <math.h>
#include <stdio.h>

void *my_realloc(void *arr, size_t old_size, size_t new_size)
{
    int arr1[new_size] = malloc(sizeof(new_size));
    for (int i = 0; i < old_size; i++)
        arr1[i] = arr[i];
    free(arr);
}

void all_div(int n)
{
    int divisor = 2, n2 = sqrt(n);

    printf("1 ");
    while (divisor <= n2)
    {
        while (n % divisor == 0)
        {
            printf("* %d ", divisor);
            n = n / divisor;
        }
        if (divisor == 2)
            divisor++;
        else 
            divisor += 2;
    }
    if (n != 1)
    {
        printf("* %d", n);
    }
}

int main()
{
    int n;

    scanf("%d", &n);
    all_div(n);

    return 0;
}
