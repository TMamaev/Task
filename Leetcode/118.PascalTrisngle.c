int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int* ans[numRows];
    int cols[1] = {1};
    ans[0] = cols;

    for (int i = 1; i < numRows; i++)
    {
        int cols[i + 1];
        for (int j = 0; j < i + 1; j++)
        {
            int pre_cols[i] = ans[i - 1];
            if (j == 0 || j == i)
                cols[j] = 1;
            else
            {
                cols[j] = pre_cols[j - 1] + pre_cols[j];
            }
        }
        ans[i] = cols;
    }
    return ans;
}