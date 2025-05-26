int main()
{
    int arr[] = {5, 2, 8, 1, 4, 10, 3};
    for (int i = 0; i < 7; i++)
    {
        for (int n = 0; n < 6; n++)
        {
            if (arr[n] > arr[n+1])
            {
                int copy = arr[n+1];
                arr[n+1] = arr[n];
                arr[n] = copy;
            }
        }
    }

    for (int i = 0; i < 7; i++)
        printf("%d ", arr[i]);
}