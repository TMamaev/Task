#include <stdio.h>
#include <limits.h>

void sorting(int arr[], int size) {
    for (int i = 1; i < size; i++)
    {
        for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
        {
            int copy = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = copy;
        }
    }
}

int main()
{
    int arr[] = {5, 6, 1, 9, 12, 4, 3, 0, 7, 8};
    int size = sizeof(arr)/sizeof(int);
    sorting(arr, size);
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
