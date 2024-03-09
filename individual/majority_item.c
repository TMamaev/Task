#include <stdio.h>

int get_major(int *arr, size_t size)
{
    int m = 0, sum = 1;

    for (int i = 0; i < size; i++)
    {
        if (sum == 1 && arr[i] != m)
            m = arr[i];
        else if (arr[i] == m)
            sum++;
        else // if (sum != 1 && arr[i] != m)
            sum--;
    }   
    return m;
}


int main()
{
    int arr[] = { 1, 3, 3, 5, 3, 3, 1, 1 };
    size_t size = sizeof(arr) / sizeof(arr[0]);

    printf("major - %d\n", get_major(arr, size));
    return 0;
}
