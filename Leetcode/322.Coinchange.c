#include <stdio.h>
#include <limits.h>

// https://leetcode.com/problems/coin-change/?envType=problem-list-v2&envId=breadth-first-search
int coinChange(int* coins, int coinsSize, int amount)
{
    int arr[amount + 1]; // amount + 1

    arr[0] = 0;
    for (int i = 1; i <= amount; i++)
    {
        int min = INT_MAX;
        for (int j = 0; j <coinsSize; j++)
        {
            if (i >= coins[j])
            {
                if (i == coins[j])
                {
                    arr[i] = 1;
                    min = 1;
                }
                else if (arr[i - coins[j]] < min && arr[i - coins[j]] > 0)
                {
                    min = arr[i - coins[j]] + 1;
                    arr[i] = arr[i - coins[j]] + 1;
                }
            }
        }
        if (min == INT_MAX)
            arr[i] = -1;
        printf("%d ", arr[i]);
    }
    printf("\n");
    return arr[amount];
}

int main()
{
    int coins[1] = {1};
    printf("%d", coinChange(coins, 1, 0));
    return 0;
}