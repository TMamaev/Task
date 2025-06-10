#include <stdio.h>
#include <limits.h>

int sorting(int arr[], int size)
{
    int min = INT_MAX;
    int pos;
    
    for (int i = 0; i < size; i++)
    {
        for (int n = i; n < size; n++)
        {
            if (arr[n] < min)
            {
                min = arr[n];
                pos = n;
            }
        }
        int copy = arr[i];
        arr[i] = min;
        arr[pos] = copy;
        pos = 0;
        
        min = INT_MAX;
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
