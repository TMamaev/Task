#include <stddef.h>

int get_major(int *arr, size_t size)
{
    int m = 0, sum = 1;

    for (int i = 0; i < size; i++)
    {
        if (sum == 1 && arr[i] != m)
            m = arr[i];
        else if (arr[i] == m)
            sum++;
        else
            sum--;
    }
    return m;
}
