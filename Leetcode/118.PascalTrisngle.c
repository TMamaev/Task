#include <stdlib.h>

// https://leetcode.com/problems/pascals-triangle/?envType=problem-list-v2&envId=dynamic-programming
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int** ans = malloc(sizeof(int*) * numRows);
    ans[0] = malloc(sizeof(int));
    ans[0][0] = 1;
    *returnSize = numRows;
    returnColumnSizes[0] = malloc(sizeof(int) * numRows);
    returnColumnSizes[0][0] = 1;

    for (int i = 1; i < numRows; i++)
    {
        ans[i] = malloc(sizeof(int) * (i + 1));
        ans[i][0] = 1;
        ans[i][i] = 1;
        returnColumnSizes[0][i] = i + 1;
        for (int j = 1; j < i; j++)
            ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];
    }
    return ans;
}

#include <stdio.h>

int main()
{
    int width = 3;
    int rows = 9;
    int space = rows - 1;
    int fact_rows = 0;
    int *column_sizes = NULL;   int **res = generate(rows, &fact_rows, &column_sizes);
 

    for (int i = 0; i < fact_rows; ++i)
    {
        for (int k = 0; k < space; k++)
            printf(" ");
        for (int j = 0; j < column_sizes[i]; ++j)
        {
            printf("%-*d", width, res[i][j]);
        }
        printf("\n");
        space--;
    }   return 0;
}
