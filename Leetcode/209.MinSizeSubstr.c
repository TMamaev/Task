// https://leetcode.com/problems/minimum-size-subarray-sum/?envType=problem-list-v2&envId=sliding-window
int minSubArrayLen(int target, int* nums, int numsSize) {
    int sum = 0;
    int left = 0;
    int right = 0;
    int min = numsSize;

    for (; right < numsSize;)
    {
        sum += nums[right];
        while (sum >= target)
        {
            if (min > right - left)
            {
                min = right - left;
            }
            sum -= nums[left];
            left++;
        }
        right++;
    }
    if (sum < target && min == numsSize)
        return 0;
    if (min > right - left && sum >= target)
    {
        min = right - left;
    }
    return min + 1;
}
