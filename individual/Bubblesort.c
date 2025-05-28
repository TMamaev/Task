int sorting(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int n = 0; n < size - 1; n++)
        {
            if (arr[n] > arr[n+1])
            {
                int copy = arr[n+1];
                arr[n+1] = arr[n];
                arr[n] = copy;
            }
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
