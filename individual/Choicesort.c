int main()
{
    int arr[] = {5, 6, 1, 9, 12, 4, 3, 0};
    int ans[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int min = 999;
    int pos;
    
    for (int i = 0; i < 8; i++)
    {
        for (int n = 0; n < 8; n++)
        {
            if (arr[n] < min)
            {
                min = arr[n];
                pos = n;
            }
        }
        arr[pos] = 1000;
        pos = 0;
        ans[i] = min;
        min = 999;
    }
    for (int i = 0; i < 8; i++)
        printf("%d ", ans[i]);
}